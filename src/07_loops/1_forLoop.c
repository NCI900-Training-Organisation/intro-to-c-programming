#include <stdio.h>

void main()
{
    for(int i = 0; i < 4; i++)
        printf("%d\n", i);

    for(int i = 100; i < 104; i++) {
        int j = i + 10;
        printf("%d\n%d\n", i, j);
    }
}