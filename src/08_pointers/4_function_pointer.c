#include <stdio.h>

int sum(int x, int y){

    return x+y;
    
}


int main(){
    int (*fptr)(int, int);

    fptr = &sum; // or just simply fptr = sum cos function name decays to a pointer;

    int result1 = sum(10, 20);
    int result2 = (*fptr)(10, 20);


    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);

    return 0;

}
