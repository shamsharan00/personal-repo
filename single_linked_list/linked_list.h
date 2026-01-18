#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node* next;
};


struct node* create_node(struct node * head) {
    struct node *ptr = head;
    struct node *new = (struct node*)malloc(sizeof(struct node)); // create a new node
    int data = 0;
    printf("Enter the data to be add to the link:");
    scanf("%d", &data);
    new->data = data; // assign data to new node
    new->next = NULL; // since its a single linked new list it ends with NULL.

    if (head == NULL)
        return new;

    while (head->next != NULL) { // loop to add the data at the end
        head = head->next;
    }
    head->next = new;

    return ptr;
}

void print_list (struct node *head) {
    struct node *current = head; // start of the head
    int i = 1;
    while (current != NULL) {
        printf(" node : %d  | data : %d\n", i, current->data);
        current = current->next; // move to next node
        i++;
    }
}