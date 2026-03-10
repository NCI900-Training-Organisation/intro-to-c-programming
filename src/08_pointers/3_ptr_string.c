#include <stdio.h>
#include <string.h>

int main()
{
    char my_name[9]; 
    int my_password = 1234567;


    strcpy(my_name, "Fred Fung");

    printf("my_name = %s \n", my_name);

    printf("secret_value = %d \n",  &my_password);

    return 0;
}

/*Remark
1. strcpy does not check size of the destination buffer
2. C is happy to write beyond the bounds of an array, which can lead to undefined behaviour, and may trigger a segment fault later.
*/