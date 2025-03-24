
#include <stdio.h>

void main()
{
    int a = 10, b = 20;

    double c = 10.1;

    /* If the condition is true, the first expression is evaluated
      if not, the second expression is evaluated
    */
    int max = (a > b) ? a : b;

    /* In C, generally, the conversion rule will conver the operand of the type of less infomration to the other one to avoid losing information. */
    int min = (a< c) ? a : c;

    printf("Maximum value %d \n", max);

    printf("Minimum value %d \n", min);
}
