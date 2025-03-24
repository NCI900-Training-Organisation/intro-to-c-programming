/* To code in C, we often need to think in bits and bytes*/

#include <stdio.h>

void main()
{
    printf(" char        = %d bytes \n", sizeof(char));
    printf(" int         = %d byte \n", sizeof(int));
    printf(" short int   = %d bytes \n", sizeof(short int));
    printf(" long int    = %d bytes \n", sizeof(long int));
    printf(" float       = %d bytes \n", sizeof(float));
    printf(" double      = %d bytes \n", sizeof(double));
    printf(" long double = %d bytes\n", sizeof(long double));
}