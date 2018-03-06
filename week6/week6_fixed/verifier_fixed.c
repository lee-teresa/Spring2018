#include <cs50.h>
#include <stdio.h>

// verifier function prototype
bool verifier(int a, int b, int c);

int main(void)
{
    // input from user
    printf("Enter the first int you are adding: ");
    int x = get_int();
    printf("Enter the second int you are adding: ");
    int y = get_int();
    printf("Enter the result: ");
    int z = get_int();

    // TODO: verify the result using the function you wrote, and print 'correct!' or 'incorrect!'
    if(verifier(x,y,z))
        printf("Verifier: Correct!\n");
    else
        printf("Verifier: Incorrect!\n");
}

// verifier function definition
bool verifier(int a, int b, int c)
{
    if (a + b == c)
        return true;
    return false;
}