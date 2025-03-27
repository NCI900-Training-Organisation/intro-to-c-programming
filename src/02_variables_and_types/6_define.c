#include <stdio.h>

/* Use #define to define Macros. The symbol then is replaced by the defined value during the preprocessing phase of compilation */

#define Value 1024

void main()
{
    int x = Value;

    printf("\nX = %d \n\n", x);
}