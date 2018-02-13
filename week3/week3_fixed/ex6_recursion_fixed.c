#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main (void)
{
    // take in array size and elements from user
    printf("please enter an integer value: ");
    int n = get_int();

    // print the result
    printf("The result of factorial(%i) is %i\n", n, factorial(n));
}

// factorial implementation
int factorial(int n)
{
    // base case
    if (n < 2)
    {
        return 1;
    }
    // recursive case
    return (n * factorial(n - 1));
}