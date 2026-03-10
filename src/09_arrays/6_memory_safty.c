#include<stdio.h>


void main(){
    
    int x[5] = {1, 2, 3, 4, 5};

    printf("x[6] = %d \n", x[6]);

    for (int i = 0; i < 6; i++) {  // what happens if we try to access x[6] in a loop?
        printf("x[%d] = %d \n", i, x[i]);
    }

    // memory safe way
    size_t array_size = sizeof(x)/sizeof(x[0]);
    for (size_t i =0; i < array_size; i++){
        printf("x[%d] = %d \n", i, x[i]);
    }

}