#include <stdio.h>
#include <stdlib.h>

void main()
{
    /** initialise a pointer to NULL */
    int *ptr = NULL;

    /** Allocate chunk a memory that can hold 10 integers */
    ptr = (int*) malloc(10 * sizeof(int)); 

    /** a[4] is equal to *(a + 4) */

    for(int i = 0; i < 10; i++) {
         *(ptr + i) = i;
    }

    printf("\n ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n\n");
}