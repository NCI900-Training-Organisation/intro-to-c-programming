#include <stdio.h>

void main()
{
    int a; /** Declare an integer variable 'a' */
    a = 1; /** Assign the value 1 to the variable */

    int b = 2; /** Declare an integer variable 'b' initialised to 2 */

    /** Evaluate the experession (a + b) / 2 and assign it to the varibale 'avg' */
    float avg = (a + b) / 2.0f; 

    printf("The average of %d and %d is %f \n", a, b, avg);
}

/* remarks
1. size of int 
2. typecasting and truncation
*/