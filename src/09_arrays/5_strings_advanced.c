#include <stdio.h>

void main()
{
    char str1[3][20] = {"multi", "dimensional", "arrays"};
    printf("\n--- 1 ---->\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 20; j++) {   
            printf("%c", str1[i][j]);
        }
        printf("\n ");
    }
    printf("\n");

    char str2[3][20] = {"multi", "dimensional", "arrays"};
    printf("\n--- 2 ---->\n");
    for(int i = 0; i < 3; i++) {
        printf("%s \n", str2[i]);
    }


    str2[0][2] = '\0';
    str2[1][2] = '\0';
    str2[2][2] = '\0';
    printf("\n--- 3 ---->\n");
    for(int i = 0; i < 3; i++) {
        printf("%s \n", str2[i]);
    }

    
    char *str3[3] = {"multi", "dimensional", "arrays"};

    printf("\n--- 4 ---->\n");
    for(int i = 0; i < 3; i++) {
        printf("%s \n", str3[i]);
    }
    printf("\n");


    printf("\n--- 5 ---->\n");
    for(int i = 0; i < 3; i++) {
        printf("%s ", str3[0]+i);
    }
    printf("\n");

    printf("\n--- 6 ---->\n");
    for(int i = 0; i < 3; i++) {
        printf("%s ", *(str3+i));
    }
    printf("\n");

    char str4[3][20] = {"multi", "dimensional", "arrays"};
    printf("\n--- 7 ---->\n");
    for(int i = 0; i < 3; i++) {
        printf("%s \n", str4+i);
    }

    printf("\n--- 8 ---->\n");
    for(int i = 0; i < 3; i++) {
        printf("%c \n", *(*(str4+i)+1));
    }
    
}