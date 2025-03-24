#include <stdio.h>

void add() {printf("Perfoming addition\n");}
void sub() {printf("Perfoming subtraction\n");}
void mul() {printf("Perfoming multiplication\n");}
void div() {printf("Perfoming division\n");}


int main(){
    int choice;
    printf("Enter your choice: 1. Addition 2. Subtraction 3. Multiplication 4. Division\n");

    scanf("%d", &choice);

    if (choice == 1) 
        add();
    else if (choice == 2) 
        sub();
    else if (choice == 3) 
        mul();
    else if (choice == 4) 
        div();
    else printf("Invalid choice\n");

    /* Alternatively, we can use function pointer to eliminate the if-else conditions */

    void (*operations[])() = {add, sub, mul, div};

    if (choice >=1  && choice <=4)
        operations[choice-1]();
    else
        printf("Invalid choice\n");

    return 0;
}