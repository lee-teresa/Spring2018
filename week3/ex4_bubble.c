#include <cs50.h>
#include <stdio.h>

void bubble_sort(int a[], int size);

#define N 5

int main (void)
{
    int numbers[N] = { 12, 8, 4, 16, 3};

    // print unsorted array
    printf("unsorted array is: \n");
    for(int i = 0; i < N; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    // run bubble sort
    bubble_sort(numbers, N);

    // print sorted array
    printf("sorted array is: \n");
    for(int i = 0; i < N; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

// partial implementation of selection sort
void bubble_sort(int a[], int size)
{
    int temp;
    int swap = 0;

    // start at first unsorted spot in array
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1 ; i++)
        {

            // TODO: compare the pair and swap if needs be
            if (a[i] > a[i + 1])
            {
                temp = a [i + 1];
                a [i + 1] = a[i];
                a [i] = temp;

                swap++;
            }
        }
         // TODO: what if no swap happened?
         if (swap == 0)
         {
             break;
         }
    }

}