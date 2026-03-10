#include <stdio.h>

void main()
{
    int x = 10;
    int *ptr_i = &x;

    printf("\n \nptr      = %u \n", ptr_i);
    printf("ptr + 1  = %u \n", (ptr_i + 1)); // moves the pointer to the next integer, which is 4 bytes away in memory
    printf("ptr - 1  = %u \n", (ptr_i - 1));

    char c = 10;
    char *ptr_c = &c;

    printf("\n \nptr_c      = %u \n", ptr_c);
    printf("ptr_c + 1  = %u \n", (ptr_c + 1));
    printf("ptr_c - 1  = %u \n", (ptr_c - 1));


    /* Pointer while loop */
    int arr[] = {11, 22, 33, 44, 55};
    int *p = arr;
    int *end = arr + 5;

    printf("\n--- pointer while loop ---->\n");
    while (p < end)
    {
        printf("value=%d, addr=%p\n", *p, (void *)p);
        p++;
    }


    /* void * pointer */
    void *vptr; //point to any unknown data type

    int n = 100;
    float f = 3.14f;
    char ch = 'A';

    printf("\n--- void * pointer ---->\n");

    vptr = &n;
    printf("int   : value=%d, address=%p\n", *( int *) vptr, vptr);

    vptr = &f;
    printf("float : value=%.2f, address=%p\n", *(float *)vptr, vptr);

    vptr = &ch;
    printf("char  : value=%c, address=%p\n", *(char *)vptr, vptr);

    vptr = arr; // point to the first element of the array
    printf("first array element via void * = %d\n", *(int *)vptr);
    printf("second array element via cast  = %d\n", *((int *)vptr + 1));


}
