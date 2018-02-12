#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("enter a number: ");
    int num = get_int();

    printf("factorial: %i \n", iterate(num));
}

/*
int iterate(int input)
{

}
*/

/* int recursive(int input)
{

}*/