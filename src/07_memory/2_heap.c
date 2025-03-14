#include <stdio.h>
#include <stdlib.h>

int x = 100;
void main()
{
    int *ptr = (int *) malloc( sizeof(int) );
    printf("0 ---> *ptr = %d \n", *ptr);

    *ptr = x;

    printf("1 ---> *ptr = %d \n", *ptr);

    int x = 10;
    *ptr = x;
    
    printf("1 ---> *ptr = %d \n", *ptr);
    
    {
        printf("1 ---> *ptr = %d \n", *ptr);

        int x = 200;
        *ptr = x;

        printf("1 ---> *ptr = %d \n", *ptr);
    }

    printf("1 ---> *ptr = %d \n", *ptr);

    free(ptr);

}