#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define STUDENTS 3

typedef struct
{
    string name;
    int year;
    float gpa;

} student;

int main (void)
{
    // TODO: declare array of classroom structs


    // enter student's information
    for(int i = 0; i < STUDENTS; i++)
    {
        printf("Please enter student name (e.g. \"Mark Anthony\"): ");
        // TODO: name

        printf("Please enter student's year (e.g. 2019): ");
        // TODO: year

        printf("Please enter student's GPA (e.g. 3.2): ");
        // TODO: gpa

    }

    // print student info
    printf("The students' info is:\n");
    for(int i = 0; i < STUDENTS; i++)
    {
        printf("name: %s year: %i house: %s HUID: %i GPA: %.2f\n", classroom[i].name, classroom[i].year, classroom[i].house ,
             classroom[i].huid , classroom[i].gpa);
    }
}