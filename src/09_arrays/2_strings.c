#include <stdio.h>

void main()
{
    /**
     * Declare a character array of size 10.
     * The array indexing starts from 0.
     * In this case 0 to 9.
     * 
     * Assign a string to the character array. A string is automatically
     * appended with the caharacter '\0' at the end.
    */

    char str1[10] = "An array";
    printf(" 1 ----> ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", str1[i]);
    }
    printf("\n");

    printf(" 2 ----> %s \n", str1);

    str1[6] = '\0';
    printf(" 3 ----> %s \n", str1);

    char *str2 = "Another array";

    printf(" 4 ----> ");
    for(int i = 0; '\0' != str2[i]; i++) {
        printf("%c ", str2[i]);
    }
    printf("\n");

    printf(" 5 ----> ");
    for(int i = 0; '\0' != *(str2+i); i++) {
        printf("%c ", *(str2+i));
    }
    printf("\n");

    printf(" 6 ----> %s \n", str2);

    /**
     * A string constant is a constant array and the memory of the array is read-only. 
     * The result of attempting to change the value of an element of a string constant is undefined.
     * 
     * TODO: remove the comments and see you the program works
    */
    //*(str2 + 4) = 'X';
    //printf(" 6 ----> %s \n", str2);
    
}