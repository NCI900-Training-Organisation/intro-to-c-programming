
#include <stdio.h>

void main()
{
    int opt;

    printf("Enter a case option: \n");
    scanf("%d", &opt); /** read an integer value from the user */

    switch(opt) {
        case 1: printf("Case 1 \n"); 
                break; /** Break statement after each case body is required */

        case 2: printf("Case 2 \n"); 
                break;

        case 3: printf("Case 2 \n"); 
                break;

        default: printf("Unknown option \n");

    }
}
