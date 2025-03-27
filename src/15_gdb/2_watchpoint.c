#include <stdio.h>
#include <stdlib.h>

void changeSomeValues(int *i)
{
    *i = *i + 1;
    *i = *i * 20;
    *i = *i - 20;
}

void changeMoreValues(int *i)
{
    *i = *i + 1;
    *i = *i / 5;
    *i = *i + 20;
}

void main()
{
    int i = 10;

    i--;
    i++;
    i = i + 10;

    changeSomeValues(&i);
    changeMoreValues(&i);
}

