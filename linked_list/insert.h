#include "linked_list.h"

struct node* insert_by_position(struct node *head) {
    int data = 0, position = 0;
    struct node *ptr = head;

    printf("Enter the position of the node:");
    scanf("%d", &position);

    struct node *new = (struct node*)malloc(sizeof(struct node));
    printf("enter the data to add to the node to be inserted: ");
    scanf("%d", &data);
    new->data = data;

    if ( position == 1) { // similar like insert at begining
        new->next = head;
        return new; // 
    } else {
        struct node *prev = NULL;
        int i = 1;
        while (i != position) { // inseerting by position
            prev = head;
            head = head->next;
            i++;
        }
        new->next = prev->next;
        prev->next = new;
    }

    return ptr;
}