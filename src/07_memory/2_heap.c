#include <stdio.h>
#include <stdlib.h>

int x = 100;

int main() {
    int *ptr = (int *) malloc(sizeof(int)); // Allocate memory on the heap
    if (ptr == NULL) {
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
    printf("0 ---> *ptr = %d \n", *ptr); // Uninitialized value

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