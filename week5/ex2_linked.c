#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node *next;
}
node;

node *head = NULL;

int main(void)
{
    // create linked list
    for (int i = SIZE; i > 0; i--)
    {
        // TODO: comment following lines of code
        //
        node *new = malloc(sizeof(node));

        //
        if (new == NULL)
        {
            exit(1);
        }

        //
        new->n = i;

        //
        new->next = head;

        //
        head = new;
    }

    // TODO: What would this print?
    for (node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }

    printf("\n");
}