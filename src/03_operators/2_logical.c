
/* Same as in python, in C 0 is considered as false and any other number is considered as true. */

/* Truth table of AND operator */
#include <stdio.h>

void main()
{
    /* Truth table of AND operator */
    printf("1 && 1 = %d \n", (1 && 1));   
    printf("1 && 0 = %d \n", (1 && 0));
    printf("0 && 1 = %d \n", (0 && 1));
    printf("0 && 0 = %d \n", (0 && 0));
}