#include <stdio.h>


add_by_val()
{
    int s;
    /** Complete this function */
    return s;
}

add_by_ref()
{
    /** Complete this function */
    return;
}

void main()
{
    int a = 0, b = 0, sum = 0;

    sum = add_by_val(a, b);
    printf("Sum    : %d\n", sum);

    add_by_val(&a, &b, &sum);
    printf("Sum    : %d\n", sum);

}
