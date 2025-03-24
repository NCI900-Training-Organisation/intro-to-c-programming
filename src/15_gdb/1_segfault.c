#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int     age;
    float   gpa;
    double  marks[2];
} Student;

void main()
{
    /** Initialise all variables */
    Student *obj1 = NULL, *obj2 = NULL;

    /** Allocate memory dynamically */
    obj1 = (Student*) malloc(sizeof(Student));

    /** Set all values for the object */
    obj1->age = 20;
    obj1->gpa = 7.2;
    obj1->marks[0] = 70;
    obj1->marks[1] = 90;

    
    printf("Age %d, GPA %lf, mark1 %lf, mark2 %lf\n", obj2->age, obj2->gpa, obj2->marks[0], obj2->marks[1]);

    /** Free allocated memory */
    free(obj1);
    free(obj2);
}

