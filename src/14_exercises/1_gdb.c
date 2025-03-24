#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void main()
{
    int sum_1 = 0, sum_2 = 0, N = 10;
    
    /** Allocate memory */
    int *vector_1 = (int *) malloc(N * sizeof(int));

    /** Initialise the values 0...N */
    for (int i = 0; i <= N; i++) {
        vector_1[i] = i;
    }

    /** Find the sum of vector */
    for (int i = 0; i <= N; i++) {
        sum_1 += vector_1[i];
    }

    /** Find the sum of N numbers */
    sum_2 = N * (N - 1) / 2;

    /** Make sure both sums are the same */
    assert(sum_1 == sum_2);

    /** Free allocated memory */
    free(vector_1);

}

