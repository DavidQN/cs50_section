#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next; // We can define a struct in a recursive manner in C
} Node;

int main(void)
{
    // Declare head of linked list (the first node in the linked list)
    Node *head = NULL;

    // Allocate enough memory for our declared node Head variable
    // Remember `malloc()` always returns a pointer if it is successful, else it returns NULL
    head = malloc(sizeof(Node));

    // Always make sure we are checking if we have enough space to allocate this node!
    // If our malloc failed above we check it here!
    if (head == NULL)
    {
        // End program if we fail to malloc()
        return 1;
    }

    // Populate the first node in the linked list
    head->val = 1;
    // The next item in linked list is empty for now because we have yet to allocate it
    head->next = NULL;

    // Let use print out our Linked List of 1 node (is it even a linked list if it just 1 node?)
    printf("Node contents: \n");
    printf("Head value: %d\n", head->val);
    // This should print out 0x0, because if we remember that is where NULL points too
    printf("Head next node: %p\n", head->next);
}