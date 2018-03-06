#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void insert(int n);

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
        // dynamically allocate size for a new node
        node *new = malloc(sizeof(node));

        // check to make sure we didn't run out of memory
        if (new == NULL)
        {
            exit(1);
        }

        // initialize the n field
        new->n = i;

        // initialize the next field
        new->next = head;

        // head now points to the new list
        head = new;
    }

    // print elements in the linked list
    for (node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }

    printf("\n");

    int add_n = get_int("enter a new number:");

    insert (add_n);

    // TODO: WHAT WOULD IT PRINT?
    for (node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }

}

void insert(int n)
{
    //dynamically allocate space for a new node
    node *add = malloc(sizeof(node));

    //check to make sure we didn’t run out of memory
    if (add == NULL)
    {
    	exit(1);
    }

    // initialize the n field
    add -> n = n;

    // initialize the next field
    add -> next = NULL;


    if (head == NULL)
    {
        head = add;
    }
    else
    {
        add -> next = head;
        head = add;
    }
}