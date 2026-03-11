/*
Unlike python, C functions mainly achieve their “outcome” through side effects instead of returning the primary result.
*/

#include <stdio.h>

/** Function declaration */
int incValue(int a); 

void main()
{
    int a = 10;

    printf("value before increment    : %d\n", a);

    /** Function call */
    int  r = incValue(a);

    printf("value after increment     : %d\n", a);
    printf("return value              : %d\n", r);

}

/** Function definition */
int incValue(int a)
{
    a = a + 1; // a is a local variable, modifying it does not affect the original variable in main

    printf("value inside the function : %d\n", a);

    return a; 
}

/* 
Remark:
1. Pass by value doesn't modify the original variable.
2. Modify data via pointers 
3. Pass input-only data by value, and output-only data by reference (via pointers)
*/