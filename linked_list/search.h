int search_node_position(struct node *head){
    int position = 0, i = 1;

    printf("Enter the positon to search:");
    scanf("%d",&position);

    while (i != position){
        head = head->next;
        i++;
    }
    printf("The data on the position %d is %d\n", position, head->data);
    return 0;
}

int search_node_data(struct node *head) {
    int data = 0, i = 1;

    printf("Enter the data to search on the linked list:");
    scanf("%d",&data);

    while (head->data != data){
        head = head->next;
        i++;
    }
    printf("Th position of the data %d is %d\n", head->data, i);
    return 0;
}