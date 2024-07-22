#include <stdio.h>

void main()
{
    int x = 10;

    /**
     * Pointer ptr of type integer
     * ptr stores the adress of integer variable x
     **/
    int *ptr = &x;

    printf("x    = %d \n", x);    /** print value of x */
    printf("ptr  = %u \n", ptr);  /** print the address of x stored by ptr */
    printf("*ptr = %d \n", *ptr); /** print the value in the address stored by ptr */

    printf("\nsize of an integer pointer  = %d bytes\n", sizeof(ptr));
    char *ptr_c = NULL;
    printf("size of a character pointer = %d bytes\n", sizeof(ptr_c));
}