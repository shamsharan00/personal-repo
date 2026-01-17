struct node * delte_by_position(struct node *head){
    int data = 0, position = 0;
    struct node *ptr = head, *delete = NULL;

    printf("Enter the position of the node:");
    scanf("%d", &position);

    if ( position == 1) { // similar like insert at begining
        delete = head;
        head = head->next;
        return head;
    } else {
        struct node *prev = NULL;
        int i = 1;
        while (i != position) { // inseerting by position
            prev = head;
            head = head->next;
            i++;
        }
        delete = head;
        prev->next = head->next;
    }
    free(delete);
    return ptr;
}