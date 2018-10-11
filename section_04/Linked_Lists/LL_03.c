#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node_t;

// Prototypes
void print_list(node_t *);
void push(node_t *, int);

int main(void)
{
    // Create starting point for Linked List
    node_t *head = malloc(sizeof(node_t));
    head->val = 1;
    head->next = NULL;

    // Push values onto Linked List
    push(head, 3);
    push(head, 10);
    push(head, 15);
    push(head, 18);
    push(head, 6);

    print_list(head);
}

// Pushes value onto the end of the Linked List
void push(node_t *head, int val)
{
    // Create pointer to iterate over the Linked List
    node_t *current = head;

    // Iterate over the Linked List until we get to the end.
    // We do this because we only want to add a node at the end of the Linked List
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Allocate memory for the next node we are going to place
    current->next = malloc(sizeof(node_t));
    // Populate fields for the newly created node
    current->next->val = val;
    current->next->next = NULL;
}

// Prints each nodes value
void print_list(node_t *head)
{
    node_t *current = head;

    // Keep iterating over the linked list until we reach the last node
    while (current != NULL)
    {
        printf("%i\n", current->val);
        current = current->next;
    }
}