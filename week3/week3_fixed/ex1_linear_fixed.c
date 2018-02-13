#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{

    for (int i = 0; i < size; i++)
    {
        // TODO: find a needle
        if (haystack[i] == needle)
        {
            return true;
        }
    }

    // TODO:
    return false;
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108};
    printf("What number are you looking for? ");
    int n = get_int();


    if (search(n, numbers, SIZE))
    {
        printf("Found it\n");
    }
    else
    {
        printf("Not here\n");
    }
}