#include <stdio.h>

void main()
{
    int i = 100;

    do {
        int j = i + 10;
        printf("%d \n", i);
        printf("%d \n", j);

        i = i +1;
    }while(i < 104);

    printf("Value of i after the loop is %d \n", i);


}