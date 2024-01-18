// Write a program to create an ordered linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head_ref, int new_data)
 {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    struct Node* current = *head_ref;

    if (*head_ref == NULL || (*head_ref)->data >= new_node->data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    } else {
        while (current->next != NULL && current->next->data < new_node->data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void display(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insert(&head, 1);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 5);
    insert(&head, 3);

    printf("Ordered List: ");
    display(head);

    return 0;
}

/*output

Ordered List: 1 2 3 4 5
*/
