#include <cs50.h>
#include <stdio.h>

void selection_sort(int a[], int size);
int find_min_index(int a[], int size, int starting_point);

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

    // run selection sort
    selection_sort(array, n);

    // print sorted array
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

// partial implementation of selection sort
void selection_sort(int a[], int size)
{
    int temp, min_index;
    // start at first unsorted spot in array
    for (int first_unsorted_index = 0; first_unsorted_index < size ; first_unsorted_index++)
    {
        // find index of min value in unsorted part of array
        min_index = find_min_index(a, size, first_unsorted_index);
        // TODO: below, swap min value into correct position

    }
}

// implement find_min_index
int find_min_index(int a[], int size, int starting_point)
{
    // TODO
}