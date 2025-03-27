#include <stdio.h>

/** Function declaration */
int incValue(int a);

void main()
{
    int a = 10;

    printf("value before increment    : %d\n", a);

    /** Function call */
    int r = incValue(a);

    printf("value after increment     : %d\n", a);
    printf("return value              : %d\n", r);

}

/** Function definition */
int incValue(int a)
{
    a = a + 1;

    printf("value inside the function : %d\n", a);

    return a;
}