#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include "2_my_malloc.h"

#define META_SIZE sizeof(struct block_meta)

void *global_base = NULL;

void *my_malloc_simple(size_t size){
    // gives a pointer to the current top of heap.
    void *p = sbrk(0);

    // increment the heap size by size
    void *request = sbrk(size);

    if (request == (void*) -1) {
        return NULL; // sbrk failed
    } 
    else {
        assert(p == request); // Not thread safe.
        return p; //if successful return the previous top of heap so you can use the requested size of memory.
    }
}

// Remark: This is a very basic implmentation of malloc. And it does not handle malloc(0) correctly. 
// How do we free the malloced memory? Recall the usage of free is void free(void *ptr), there's no information 
// about the size of the memory passed to the argument.

// Create a single linked list
struct block_meta {
    size_t size;
    struct block_meta *next;
    int free;
    int magic; // For debugging only
};

// we want to reuse free space if possible, allocating spaces only when we can't reuse exisitng free space. 
// we use the linked list structure to check if we have a free block. When we get a request of some size, we iterate through our linked list to see if there's a free block that can be used.

struct block_meta *find_free_block(struct block_meta **last, size_t size) {
    struct block_meta *current = global_base;
    // iterate through the linked list to find a block that is marked as free and has a size greater than or equal to the requested size.
    while (current && !(current->free && current->size >=size)){
        *last =current;
        current = current->next;
    }
    return current;
}

// if we can't find a free block, we need to request space from the OS using sbrk and add our new block to the end of the linked list.

struct block_meta *request_space(struct block_meta *last, size_t size){
    struct block_meta *block;
    block = sbrk(0); // get the current top of heap
    void *request = sbrk(size + META_SIZE);
    assert((void*)block == request); // Not thread safe.
    if (request == (void*) -1){
        return NULL; // sbrk failed
    }

    if (last) {
        last->next =block;
    }
    block->size =size;
    block->next;
    block->free = 0;
    block->magic = 0x12345678;
    return block;

}

// using the helper functions we've defined above. We can implement a refined malloc function: if our global base pointer is NULL, we need to request space and set the base pointer to the new block. If it's not NULL, we check to see if we can reuse any existing space. 
void *my_malloc(size_t size){
    struct block_meta *block;
    if (size<=0){
        return NULL;
    }

    // global_base is NULL in the first call
    if (!global_base){
        block = request_space(NULL, size);
        if (!block){
            return NULL;
        }
        global_base = block;
    } 
    else {
        struct block_meta *last = global_base;
        block = find_free_block(&last, size);
        if (!block){
            block = request_space(last, size);
            if (!block){
                return NULL;
            }
        }
        else{
            block->free ==0;
            block->magic = 0x77777777;
        }
    }

    return (block+1); // increase by one sizeof(block_meta)
}


struct block_meta *get_block_ptr(void *ptr){
    return (struct block_meta*)ptr -1; //move back to the start of the block metadata
}

void my_free(void *ptr){
    if (!ptr){
        return;
    }

    struct block_meta* block_ptr=get_block_ptr(ptr);
    assert(block_ptr->free ==0);
    assert(block_ptr->magic ==0x77777777 || block_ptr->magic ==0x12345678);
    block_ptr->free =1;
    block_ptr->magic =0x55555555;
}

// note that we still have the block of the memory, but we've marked it as free. We can reuse this block in the future.

// We may as well implement relloc and calloc functions.
// Realloc adjusts the size of a block of memory that we've aquired from malloc
// The Realloc function has the following signature: 
// void *realloc(void *ptr, size_t size);
// If we pass a NULL pointer to realloc, it acts just like malloc. If we pass it a previously malloced pointer, it should free up space if the size is smaller than the previous size, and allocate more space and copy the existing data over if the size is larger than the previous size.

void *my_realloc(void *ptr, size_t size){
    if (!ptr){
        return my_malloc(size);
    }

    struct block_meta* block_ptr = get_block_ptr(ptr);
    if (block_ptr ->size >= size){
        return ptr;
    }

    void *new_ptr;
    new_ptr = my_malloc(size);
    if (!new_ptr){
        return NULL;
    }
    memcpy(new_ptr, ptr, block_ptr->size);
    my_free(ptr);
    return new_ptr;
}


// calloc initializes the memory it allocates to zero. The calloc function has the following signature:
// void *calloc(size_t nelem, size_t elsize);

void  *my_calloc(size_t nelem, size_t elsize){
    size_t size = nelem * elsize; // calculate the total size of the memory to be allocated
    void *ptr = my_malloc(size); // allocate the memory
    memset(ptr, 0, size); // initialize the memory to zero
    return ptr;
}



