#include <stdio.h>

void main()
{
    /**
     * Declare an 2-D integer array of size OF 2 rows and 10 columns.
     * The array indexing on both dimensions starts at 0.
     * In this case 0 to 9 in both dimensions.
    */
    int a[2][10];

    printf(" \n--- 1 ----> \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n ");
    }
    printf("\n ");

    /** Initialize the 2-D array */
    int b[2][10] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 
                    200, 201, 202, 203, 204, 205, 206, 207, 208, 209};

    printf(" --- 2 ----> \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            printf(" %d", b[i][j]);
        }
        printf("\n ");
    }
    printf("\n ");

    int c[2][10];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            b[i][j] = i;
        }
    }

    printf(" --- 3 ----> \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
            printf(" %d", b[i][j]);
        }
        printf("\n ");
    }
}