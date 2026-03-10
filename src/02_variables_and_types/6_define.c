#include <stdio.h>

/* Use #define to define Macros. The symbol then is replaced by the defined value during the preprocessing phase of compilation */

#define Value 1024*10

void main()
{
    int x = Value;

    printf("\nX = %d \n\n", x);
}

/* 
Remark: 
1. Macro is defined in preprocessing.
2. #define Square (x) x*x
    int a, b =2
    int a = Square(a+b); 
*/