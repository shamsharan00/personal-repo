struct node * pairwise_swap(struct node *head) {
    // Base case
    if (!head || !head->next) return head;
    
    // First swap manually (new head)
    struct node *curr = head;
    head = head->next; // to return the as head since position 2 become as head
    struct node *next = curr->next;
    curr->next = next->next;
    next->next = curr;
    
    // next_node is new head, curr is now 3rd node
    struct node *prev = curr;  // end of first pair
    
    // Continue swapping remaining pairs
    curr = curr->next;  // move to 3rd node
    while (curr && curr->next) {
        next = curr->next;
        curr->next = next->next;
        next->next = curr;
        prev->next = next;  // link previous pair
        prev = curr;             // end of current pair
        curr = curr->next;           // start of next pair
    }
    
    return head;  // original 2nd node (new head)
}