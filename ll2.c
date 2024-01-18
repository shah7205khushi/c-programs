//Write a program to create a singly linked list and display its elements in LIFO pattern. Also display the number of 
//elements in the list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head, int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void display(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void display_lifo(struct Node* head) {
    if (head == NULL) {
        return;
    }
    display_lifo(head->next);
    printf("%d ", head->data);
}

int count(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    printf("Original List: ");
    display(head);

    printf("List in LIFO pattern: ");
    display_lifo(head);
    printf("\n");

    printf("Number of elements in the list: %d\n", count(head));

    return 0;
}


/*output

Original List: 5 4 3 2 1
List in LIFO pattern: 1 2 3 4 5
Number of elements in the list: 5
*/
