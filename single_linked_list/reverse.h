struct node *reverse(struct node *head) {
    struct node *prev = NULL, *next = NULL, *curr = head;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}