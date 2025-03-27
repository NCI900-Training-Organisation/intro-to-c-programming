#include <stdio.h>

/** Function declaration */
void incValue(int *a);

void main()
{
    int a = 10;

    printf("value before increment    : %d\n", a);

    /** Function call */
    incValue(&a);

    printf("value after increment     : %d\n", a);

}

/** Function definition */
void incValue(int *a)
{
    *a = *a + 1;

    printf("value inside the function : %d\n", *a);
}