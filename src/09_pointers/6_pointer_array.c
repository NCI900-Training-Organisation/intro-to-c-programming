#include <stdio.h>
#include <stdlib.h>

int main(){
    

    /* Method 1: delcare a 3 x 3 array */
    int array_2d[3][3];

    for (int i = 0; i<sizeof(array_2d)/sizeof(array_2d[0]); i++){
        for (int j =0; j<sizeof(array_2d[0])/sizeof(array_2d[0][0]); j++){
            array_2d[i][j] = i*3+j;
        }
    }
    
    for (int i = 0; i<sizeof(array_2d)/sizeof(array_2d[0]); i++){
        for (int j =0; j<sizeof(array_2d[0])/sizeof(array_2d[0][0]); j++){
            printf("%d ",  array_2d[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    /* Method 2: Delcare a pointer array for variable-length rows*/
    int *ptr_array_2d[3];

    for (int i = 0; i<sizeof(ptr_array_2d)/sizeof(ptr_array_2d[0]); i++){
        int *row = (int *)malloc(sizeof(int)*i);
        for (int j =0; j<= i; j++){
            /* create array 0, .. j */
            row[j] = j;
        }
        ptr_array_2d[i] = row;
    }

    for (int i = 0; i<sizeof(ptr_array_2d)/sizeof(ptr_array_2d[0]); i++){
        for (int j =0; j<= i; j++){
            printf("%d ",  ptr_array_2d[i][j]);
        }
        printf("\n");
    }

    /* free the allocated memory */
    for (int i = 0; i<sizeof(ptr_array_2d)/sizeof(ptr_array_2d[0]); i++){
        free(ptr_array_2d[i]);
    }
}