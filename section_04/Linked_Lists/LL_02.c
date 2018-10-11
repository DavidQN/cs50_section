#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next; // We can define a struct in a recursive manner in C
} node_t;

// Prototypes
void print_list(node_t *);

int main(void)
{
    // Create starting point for Linked List
    node_t *head = NULL;
    head = malloc(sizeof(node_t));
    head->val = 1;

    // Create the next Link in the Linked List
    head->next = malloc(sizeof(node_t));
    head->next->val = 2;

    // Set the Node after next to null since we only have the first node and node after that one populated.
    // The third node is set yet so we set it to NULL;
    head->next->next = NULL;

    // Now let us print the links in a linked list
    print_list(head);
    // YAY! It printed the 2 links we created!
}

// Remember since we are passing in a pointer, we get access to that node in memory, and not make a copy
void print_list(node_t *head)
{
    // Create a temp node that we will use to iterate over the linked list.
    // Why?
    // Well we don't want to lose the Head, so we will use some dummy variable and use that node as our pointer
    // to check every single node until we reach the end, which should be a null. Remember how we kept setting
    // the `next` to null, this is why! Think of it like how string literals have the null terminator '\0'
    // so the printf() can tell when we reached the end of a string, that is what we will be doing here!
    node_t *current = head;

    // Keep iterating over the linked list until we reach the last node
    while (current != NULL)
    {
        // Print each node we iterate over
        printf("%i\n", current->val);
        // Move the node pointer forward. Imagine it like `i++` when we are iterating
        // over an array in a `for loop`, except the current->next is entering the next struct this points too
        current = current->next;
    }
}