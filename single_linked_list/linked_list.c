/*
this is the part to create the linked list and from here we can call the
function we need to perform on linked list
*/

#include "insert.h"
#include "deletion.h"
#include "search.h"
#include "reverse.h"

int main() {
    struct node * head = NULL;
    int option = 0;

    do {
        printf("1. create node\n2. print linked list \n3. insert node by position"
            "\n4. delete node \n5. search node by position\n6. search node by data\n7. "
            "reverse\n8. exit \n"); 
        printf(" Enter the number to do the operations on linked list \n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                head = create_node(head);
                break;
            case 2:
                print_list(head);
                break;
            case 3:
                head = insert_by_position(head);
                break;
            case 4:
                head = delte_by_position(head);
                break;
            case 5:
                search_node_position(head);
                break;
            case 6:
                search_node_data(head);
                break;
            case 7:
                head = reverse(head);
                break;
            case 8:
                exit(0);
            default:
                printf(" please enter the valid option \n");
        }
    } while (1);
    return 0;
}