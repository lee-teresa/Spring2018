#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int* y;
    *y = 14;
    printf("The value y is pointing at is %i\n", *y);
}