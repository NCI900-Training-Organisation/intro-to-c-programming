/*
The stack memory is used for storing local variables. When a local variable is defined, memory is allocated for it, and this memory is released promptly as the variable goes out of scope. The stack operates in a last-in-first-out (LIFO) queue. As variables are defined, they are "pushed onto the stack," increasing the stack's size. At the conclusion of a block, when multiple variables go out of scope simultaneously, they are destroyed, or "popped off the stack," in the reverse order of their allocation. Stack memory allocation is entirely managed by the compiler.
*/
#include <stdio.h>

int x = 100; /* The global variable is stored in the data segment */
void main()
{
    printf("1 ---> x = %d \n", x);

    int x = 10;
    
    printf("2 ---> x = %d \n", x);
    
    {
        printf("3 ---> x = %d \n", x);

        int x = 200;

        printf("3 ---> x = %d \n", x);
    }

    printf("5 ---> x = %d \n", x);
}