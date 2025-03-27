#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "mathlib.h"

int main(){
    double a  =0.0;
    double b=M_PI;
    int n =10;

    double result = integrate(sin, a, b, n);

    printf("integral of sin from %.2f to %.2f = %.6f\n", a, b, result);

    print_func_val(a, b);

    free(func_values);

    return 0;
}