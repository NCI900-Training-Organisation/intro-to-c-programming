
#include <stdio.h>
#include <math.h>

void main()
{
    int a = 7, b = 2;
    double c = 0.5;
    
    printf("a / b = %d \n", a / b);
    printf("a * b = %d \n", a * b);
    printf("a * b = %lf \n", (float)a / b);
    printf("-a / b = %d \n", -a / b); // C truncates the result towards zero
    printf("a * b^c = %lf \n", a * pow(b, c) );
}