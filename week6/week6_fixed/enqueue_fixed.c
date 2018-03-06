#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>


// the capacity of the queue
#define CAPACITY 10

// a queue
typedef struct
{
    // the index of the first element in the queue
    int head;

    // storage for the elements in the queue
    char *strings[CAPACITY];

    // the size of the queue
    int size;
}
queue;

// declare a queue (as a global variable)
queue q;

/**
 * Puts a new element into the queue into the "end" of the data structure
 * so that it will be retrived after the other elements already in the
 * queue.
 */
bool enqueue(char *str)
{
    if (q.size != CAPACITY)
    {
        // add new element to end, by taking mod of (head + size)
        int end = (q.head + q.size) % CAPACITY;
        q.strings[end] = str;
        q.size++;
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    // initialize the queue
    q.head = 0;
    q.size = 0;

    printf("start putting elements into queue\n");
    while (q.size < CAPACITY)
    {
        char *str;
        str = get_string();
        enqueue(str);
    }

    printf("let's see\n");

    for (int i=0; i < CAPACITY; i++)
    {
        printf("%s\n", q.strings[i]);
    }
}