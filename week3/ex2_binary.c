#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    // iterative implementation
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end)
    {

        mid = (start+end)/2;

        if (haystack[mid] == needle)
        {
            // TODO: find out the mid position
        }


        else if (haystack[mid] < needle)
        {
            // TODO: needle in the second half
        }

        else
        {
            // TODO: needle in the first half
        }

    }
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