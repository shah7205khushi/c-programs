//8. Write a C program to split a given linked list into two.
#include <stdio.h>
#include <stdlib.h>

// Define a structure for each node of the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Function to split the linked list into two
void splitList(struct Node* head, struct Node** head1, struct Node** head2) {
    struct Node* slowPtr = head;
    struct Node* fastPtr = head->next;

    // Advance the fast pointer two nodes at a time, and the slow pointer one node at a time
    while (fastPtr != NULL) {
        fastPtr = fastPtr->next;

        if (fastPtr != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next;
        }
    }

    // The slow pointer is now pointing to the middle node of the linked list
    *head1 = head;
    *head2 = slowPtr->next;
    slowPtr->next = NULL;
}

int main() {
    // Create the linked list
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    // Print the original linked list
    printf("Original Linked List: ");
    printList(head);
    printf("\n");

    // Split the linked list into two
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    splitList(head, &head1, &head2);

    // Print the two new linked lists
    printf("First Linked List: ");
    printList(head1);
    printf("\n");

    printf("Second Linked List: ");
    printList(head2);
    printf("\n");

    return 0;
}
/* output

Original Linked List: 1 2 3 4 5
First Linked List: 1 2 3
Second Linked List: 4 5

*/
