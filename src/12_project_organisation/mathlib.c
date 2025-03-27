#include <stdio.h>
#include <stdlib.h>
#include "mathlib.h"
#include "error_msg.h"

double *func_values =NULL;
int num_points = 0;

// we only need the function within this file, so we can declare it as static
static double trapezoid_area(double x0, double x1, double y0, double y1){
    return (x1-x0)*(y0+y1)/2;
}


double integrate(double (*func)(double), double a, double b, int n){
    if (n<=1 || a>=b){
        error_msg("Invalid interval or number of points");
        return 0;
    }

    num_points =n;
    func_values = malloc(n*sizeof(double));
    if (!func_values){
        error_msg("Memory allocation failed");
        return 0;
    }

    // calculate the function values at each point
    double h = (b-a) /(n-1);
    double x=a;
    for (int i=0; i<n; i++){
        func_values[i] = func(x);
        x += h;
    }

    double sum = 0.0;
    x = a;
    for (int i = 0; i<n-1; i++){
        sum += trapezoid_area(x, x+h, func_values[i], func_values[i+1]);
        x += h;
    }

    return sum;
}

    void print_func_val(double a, double b){
        if (!func_values){
            error_msg("Function values not calculated");
            return;
        }

        double h = (b-a)/(num_points-1);
        double x = a;
        for (int i=0; i<num_points; i++){
            printf("f(%.5f) = %.5f\n", x, func_values[i]);
            x += h;
        }
    }




