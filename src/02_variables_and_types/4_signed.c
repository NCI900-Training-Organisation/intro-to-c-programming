#include <stdio.h>

void main()
{
    /**
     * A 16-bit signed short can represent the numbers −32768 to 32767 (−2^15 to 2^15 − 1, one bit is used to denote the sign) 
     * While a 16-bit unsigned short can represent the numbers 0 to 65535 (i.e., 0 to 2^16−1) 
     * Varibales are signed by default*/

    signed short int   a = 32767; 
    unsigned short int b = 65535;
    unsigned short int b_ = 65536;

    printf("Signed %d Unsigned %d \n", a, b);
    printf("Unsigned %d \n", b_);

    signed short int c = 65535;
    unsigned short int   d = -10;

    printf("Signed %d Unsigned %d \n", c, d);
}