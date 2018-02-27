/*
(1) modify the struct to include house (a string) and HUID (an 8-digit int)
(2) take in input from the user for the new fields
*/

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
    // declare array of class structs
    student classroom[STUDENTS];

    for(int i = 0; i < STUDENTS; i++)
    {
        printf("Please enter student name (e.g. \"Mark Anthony\"): ");
        classroom[i].name = get_string();
        printf("Please enter student's year (e.g. 2019): ");
        classroom[i].year = get_int();
        printf("Please enter student's GPA (e.g. 3.2): ");
        classroom[i].gpa = get_float();
    }

    // print student info
    printf("The students' info is:\n");
    for(int i = 0; i < STUDENTS; i++)
    {
        printf("name: %s year: %i GPA: %.2f\n", classroom[i].name, classroom[i].year, classroom[i].gpa);
    }
}