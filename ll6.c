 //Write a program to calculate the summation of all elements of the linked list
 #include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int sumList(struct Node* head) {
    int sum = 0;

    while (head != NULL) {
        sum += head->data;
        head = head->next;
    }

    return sum;
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // create linked list
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 6;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    int sum = sumList(head);

    printf("The sum of the elements in the linked list is: %d", sum);

    return 0;
}
/*output

The sum of the elements in the linked list is: 11
*/
