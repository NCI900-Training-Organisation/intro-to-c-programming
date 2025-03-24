#include <stdio.h>

/**
 * Structure with two members of type: 
 * integer
 * float
*/

typedef struct student
{
    int  age;
    float gpa;
} Student;

void main()
{
    Student obj;

    /** Set the value of the members of the struct object */
    obj.age = 20;
    obj.gpa = 7.2;

    printf("Age %d, GPA %lf\n", obj.age, obj.gpa);
}

