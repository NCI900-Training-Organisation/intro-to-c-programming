#include <stdio.h>

void main()
{
    int first = 0, second = 1, new;

    // fill the printf statement
    //fill the for loop
    {
        new = first + second;
        first = second;
        second = new;
        printf("%d\n", new);
    }

}