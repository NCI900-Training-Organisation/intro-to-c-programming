
#include <stdio.h>

void main()
{
    int a = 10, b = 20;
    
    /** Single line if body does not need {} braces */
    if (a > 5) 
        printf("If condition - single statement \n");

    /** Multi line if body needs {} braces */
    if (a > 5) {
        b = b + 10;
        a = a - 2;
        print("If condition - multple statement \n"); 
    }
}
