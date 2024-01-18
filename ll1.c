//Write a program to create a singly linked list and display its elements in FIFO pattern. Also display the number of 
//elements in the list.


#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = (*head);
    (*head) = newNode;
}

void display(struct Node* head) {
    struct Node* current = head;
    int count = 0;
    printf("Elements in the list (FIFO):\n");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
        count++;
    }
    printf("\nNumber of elements in the list: %d", count);
}

int main() {
    struct Node* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    display(head);
    return 0;
}

/*output

Elements in the list (FIFO):
5 4 3 2 1
Number of elements in the list: 5
--------------------------------


*/

