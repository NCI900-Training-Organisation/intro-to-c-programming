#include <stdio.h>

void main()
{
    int x = 10;
    int *ptr_i = &x;

    printf("\n \nptr      = %u \n", ptr_i);
    printf("ptr + 1  = %u \n", (ptr_i + 1));
    printf("ptr - 1  = %u \n", (ptr_i - 1));

    char c = 10;
    char *ptr_c = &c;

    printf("\n \nptr      = %u \n", ptr_c);
    printf("ptr + 1  = %u \n", (ptr_c + 1));
    printf("ptr - 1  = %u \n", (ptr_c - 1));
}


//Todo: pointer while loop

//Todo: void * pointer

