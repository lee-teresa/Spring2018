#include <cs50.h>
#include <stdio.h>

void insertion_sort(int a[], int n);

int main (void)
{
    // take in array size and elements from user
    printf("please enter array size: ");
    int n = get_int();
    int array[n];
    printf("please enter %i elements, to fill array: \n", n);
    for(int i = 0; i < n; i++)
    {
        array[i] = get_int();
    }

    // print unsorted array
    printf("unsorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    // run insertion sort, and print sorted array
    insertion_sort(array, n);
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

// buggy implementation of insertion sort
void insertion_sort(int a[], int n)
{
    // start at first unsorted element
    for (int first_unsorted_index = 1; first_unsorted_index < n; first_unsorted_index++)
    {
        // TODO: iterate from right to left, swapping unsorted element until it is in the correct position (don't forget to stop at 0!)
    }
}