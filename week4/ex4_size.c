#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string course = "cs50";
    char *pCourse = course;
    int size = sizeof(pCourse);

    // TODO: what would this print?
    printf("value of k is %s which is located at %p\n the size of pCourse is %i bytes\n", course, pCourse, size);
}