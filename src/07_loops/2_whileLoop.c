#include <stdio.h>

void main()
{
    int i = 100;
    while(i < 104) {
        int j = i + 10;
        printf("%d \n", i);
        printf("%d \n", j);

        i = i +1;
    }

}