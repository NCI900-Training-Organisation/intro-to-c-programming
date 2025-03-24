#include <stdio.h>
#include <string.h>

void main()
{
    /**
     * Declare an integer array of size 10.
     * The array indexing starts from 0.
     * In this case 0 to 9.
    */
    int a[10];

    printf(" 1 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n ");

    /** Initialize the array */
    int b[10] = {0, 1, 2, 3, 4, 5, 6, 8, 8, 9};

    printf("2 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n ");
    
    int c[10];
    /** Initialize the array using for loop */
    for(int i = 0; i < 10; i++) {
        c[i] = 0;
    }

    printf("3 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n ");


    char d[10];
    memset(d, 'a', 10);
    printf("4 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", d[i]);
    }
    printf("\n ");
}