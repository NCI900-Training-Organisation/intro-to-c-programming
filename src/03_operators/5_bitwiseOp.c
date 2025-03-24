
/* C codes often use bitwise operations.*/

#include <stdio.h>


#define SET_ON 0b00001111 // Binary: 00001111 (8 bits)
int main(){

    int n =255; // Binary:11111111 (8 bits)
    
    n = n & 0177; // Octal 0177 = Binary 1111111 (7 bits)

    printf("result of n&0177 = %d \n", n);

    int  x = 0b10100000;

    x = x | SET_ON;

    printf("result of x|SET_ON = 0b%08b \n", x); // set to 1 in x the bits that are 1 in SET_ON

    int y = 0b10100000;

    y = y & ~077; // Octal 077 = 00111111 (6 bits), ~077 converts 077 to 01000000 (6 bits) and then & operation is performed

    printf("result of y&~077 = %d \n", y); //Binary 01111111 = Dec 128

    int z =  3;

    printf("result of z<<2 = %d \n", z<<3); // <<3 shifts the value of x left by 1 position, equivalant to muliplying by 8.

    printf("result of z>>2 = %d \n", z>>1); // >>1 shifts the value of x right by 1 position, equivalant to dividing by integer division by 2.

    // position index p
    int p = 4;
    
    n = 3;

    printf("get %d bits from position %d of %d: %d \n", n, p, x,  x>> (p+1-n)) & ~(~0 << n); 





    return 0;
}