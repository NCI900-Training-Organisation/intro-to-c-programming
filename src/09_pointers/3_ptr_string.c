#include <stdio.h>
#include <string.h>

int main()
{
    char my_name[9]; 
    int my_password = 123456;

    strcpy(my_name, "Fred Fung");

    printf("my_name = %s\n", my_name);

    printf("secret_value = %d\n", my_password);

    return 0;
}