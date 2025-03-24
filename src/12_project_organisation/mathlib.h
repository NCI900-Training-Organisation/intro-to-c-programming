// Separate declaration from implementation.
// Let other parts of the prgram know what are available functions and variables.

#ifndef MATHLIB_H
#define MATHLIB_H

extern double *func_values;
extern int num_points;

double integrate(double (*func)(double), double a, double b, int n);
void print_func_val(double a, double b);

#endif

