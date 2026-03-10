/*
The heap memory region is designated for dynamically allocated storage and is handled explicitly by the programmer, rather than the compiler. Requests for memory allocation and de-allocation are managed through a set of standard library functions, granting the programmer full control over the lifespan of allocated memory blocks. While heap-allocated memory offers flexibility and control, it also entails added responsibility on the part of the programmer. Unlike stack memory, the compiler does not verify the correct management of memory, making dynamic memory errors a common source of subtle runtime bugs.
*/


#include <stdio.h>
#include <stdlib.h>

int x = 100;

int main() {
    int *ptr = (int *) malloc(sizeof(int)); // Allocate memory on the heap, however, the pointer variable ptr itself is stored on the stack as a local variable.
    if (ptr == NULL) { // Good practice to check if malloc succeeded
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Address of global x: %p\n", (void*)&x);
    printf("Address of ptr (stack): %p\n", (void*)&ptr);
    printf("Address of allocated memory (heap): %p\n", (void*)ptr);

    /* 1. ptr is allocated with malloc 
       2. ptr holds a memory address in the heap
       3. *ptr is uninitialised 
    */
    printf("0 ---> *ptr = %d \n", *ptr); // Uninitialized value, it will print zero. Why?

    *ptr = x; // Store the value of global x in heap memory

    printf("1 ---> *ptr = %d \n", *ptr); // Should print 100

    int x = 10; // Local variable (stack), shadows the global x
    printf("Address of local x (stack): %p\n", (void*)&x);

    *ptr = x; // Store the value of local x in heap memory

    printf("2 ---> *ptr = %d \n", *ptr); // Should print 10
    
    {
        printf("3 ---> *ptr = %d \n", *ptr); // Should print 10

        int x = 200; // Local variable (stack), shadows the previous local x
        printf("Address of nested local x (stack): %p\n", (void*)&x);

        *ptr = x; // Store the value of nested local x in heap memory

        printf("4 ---> *ptr = %d \n", *ptr); // Should print 200
    }

    printf("5 ---> *ptr = %d \n", *ptr); // Should print 200

    free(ptr); // Free the allocated memory

    return 0;

}