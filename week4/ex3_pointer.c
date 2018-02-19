#include <stdio.h>

int main (void)
{
    int date = 15;

    // TODO: create a pointer to date called point_to_date
    int *point_to_date;
    point_to_date = &date;

    // TODO: what would this print?
    printf("value of date is %i and it's located at %p\n", date, point_to_date);
}