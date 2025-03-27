
/* C provides the typedef facility for creating new data type names. However, it does not create new datatype in any sense; it merely adds a new name for some existing type.*/

#include <stdio.h>

typedef int NUMBER;

void main()
{
    NUMBER x = 512;

    printf("\nX = %d \n\n", x);
}