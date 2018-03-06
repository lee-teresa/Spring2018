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

/**
 * Retrieves ("dequeues") the first element in the queue, following the
 * the "first-in, first-out" (FIFO) ordering of the data structure.
 * Reduces the size of the queue and adjusts the head to the next element.
 */
char *dequeue(void)
{
    if (q.size != 0)
    {
        char* s = q.strings[q.head];
        q.head = (q.head + 1) % CAPACITY;
        q.size--;
        return s;
    }
    else
    {
        return NULL;
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

    printf("now dequeue\n");

    char *returned = dequeue();
    printf("here's what's returned %s\n", returned);

    printf("let's see again\n");

    for (int i=q.head; i < CAPACITY; i++)
    {
        printf("%s\n", q.strings[i]);
    }
}