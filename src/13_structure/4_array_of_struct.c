#include <stdio.h>
#include <stdlib.h>

/**
 * Structure with two members of type: 
 * integer
 * float
*/

typedef struct student
{
    int     age;
    float   gpa;
    double  marks[2];
} Student;

void main()
{
    Student *obj;

    /** allocate an array of struct object in dynamic memory*/
    obj = (Student*) malloc(2 * sizeof(Student));

    /** Set the value of the members of the struct object */
    
    obj[0].age = 20;
    obj[0].gpa = 7.2;
    obj[0].marks[0] = 70;
    obj[0].marks[1] = 90;

    obj[1].age = 21;
    obj[1].gpa = 8.2;
    obj[1].marks[0] = 74;
    obj[1].marks[1] = 89;

    printf("Age %d, GPA %lf, mark1 %lf, mark2 %lf\n", obj[0].age, obj[0].gpa, obj[1].marks[0], obj[1].marks[1]);
    printf("Age %d, GPA %lf, mark1 %lf, mark2 %lf\n", obj[1].age, obj[1].gpa, obj[1].marks[0], obj[1].marks[1]);

    free(obj);
}

