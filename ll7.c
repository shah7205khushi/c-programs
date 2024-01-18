 //Write a program to create two linked list and append the second list after the first.
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

// Function to append the second linked list to the end of the first linked list
void appendList(struct Node* head1, struct Node* head2) {
    struct Node* current = head1;

    // Iterate through the first linked list to reach the last node
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Link the last node of the first linked list to the head of the second linked list
    current->next = head2;
}

int main() {
    // Create the first linked list
    struct Node* head1 = NULL;
    struct Node* second1 = NULL;
    struct Node* third1 = NULL;

    head1 = (struct Node*) malloc(sizeof(struct Node));
    second1 = (struct Node*) malloc(sizeof(struct Node));
    third1 = (struct Node*) malloc(sizeof(struct Node));

    head1->data = 1;
    head1->next = second1;

    second1->data = 2;
    second1->next = third1;

    third1->data = 3;
    third1->next = NULL;

    // Create the second linked list
    struct Node* head2 = NULL;
    struct Node* second2 = NULL;
    struct Node* third2 = NULL;

    head2 = (struct Node*) malloc(sizeof(struct Node));
    second2 = (struct Node*) malloc(sizeof(struct Node));
    third2 = (struct Node*) malloc(sizeof(struct Node));

    head2->data = 4;
    head2->next = second2;

    second2->data = 5;
    second2->next = third2;

    third2->data = 6;
    third2->next = NULL;

    // Print the two linked lists before appending
    printf("First Linked List: ");
    printList(head1);
    printf("\n");

    printf("Second Linked List: ");
    printList(head2);
    printf("\n");

    // Append the second linked list to the first linked list
    appendList(head1, head2);

    // Print the merged linked list
    printf("Merged Linked List: ");
    printList(head1);
    printf("\n");

    return 0;
}

/*output

First Linked List: 1 2 3
Second Linked List: 4 5 6
Merged Linked List: 1 2 3 4 5 6

*/
