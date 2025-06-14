/*
    Linked lists are a dynamic data structure consisting of Nodes

    Linked lists can grow or shrink as needed

    Advantages:
        - Items can be added / removed from the middle of the list
        - No initial size needs to be defined

    Disadvantages:
        - No random access - have to itterate over all nodes before the required one
        - Pointers and dynamic memory allocation is required
        - Larger overheads which is less efficient for memory usage
        - Each item in a list must store an additional pointer


    - A linked list is a set of dynamically allocated nodes.
    - Each nodes contains a value and a pointer
    - The pointer points to the next node
    - If the pointer is NULL then it is the last node of the list

    ------------------------------              ------------------------------
    |              |             |             \|              |             |
    |     DATA     |     NEXT    |--------------|     DATA     |     NEXT    |
    |    (value)   |  (pointer)  |             /|              |             |
    ------------------------------              ------------------------------

*/

#include <stdio.h>
#include <stdlib.h>

// typedef struct node {
//     int val;
//     struct node* next;
// } node_t;

// void print_list(node_t* head, int val) {
//     node_t* current = head;

//     while (current != NULL) {
//         printf("%d\n", current->val);
//         current = current->next;
//     }

//     current->next = (node_t*)malloc(sizeof(node_t));
//     current->next->val = val;
//     current->next->next = NULL;
// }

// void push(node_t** head, int val) {
//     node_t* new_node;
//     new_node = (node_t*)malloc(sizeof(node_t));

//     new_node->val = val;
//     new_node->next = *head;
//     *head = new_node;
// }

// int pop(node_t** head) {
//     int retval = -1;
//     node_t* next_node = NULL;

//     if (*head == NULL) {
//         return -1;
//     }

//     next_node = (*head)->next;
//     retval = (*head)->val;
//     free(*head);
//     *head = next_node;

//     return retval;
// }

// int remove_last(node_t* head) {
//     int retval = 0;
//     /* if there is only one item in the list, remove it */
//     if (head->next == NULL) {
//         retval = head->val;
//         free(head);
//         return retval;
//     }

//     /* get to the second to last node in the list */
//     node_t* current = head;
//     while (current->next->next != NULL) {
//         current = current->next;
//     }

//     /* now current points to the second to last item of the list, so let's remove current->next */
//     retval = current->next->val;
//     free(current->next);
//     current->next = NULL;
//     return retval;
// }

// /*
//     To remove a specific item from the list we need to do a few things:

//         1. Iterate over all nodes to get to the node before the one we want to remove
//         2. Save the node we want to remove in a temporary pointer
//         3. Set the previous node's next pointer to point to the node after we want to delete
//         4. Delete the node using the temporary pointer
// */

// int remove_by_index(node_t** head, int n) {
//     int i = 0;
//     int retval = 1;
//     node_t* current = *head;
//     node_t* temp_node = NULL;

//     if (n == 0) {
//         return pop(head);
//     }

//     for (i = 0; i < n - 1; i++) {
//         if (current->next == NULL) {
//             return -1;
//         }

//         current = current->next;
//     }

//     if (current->next == NULL) {
//         return -1;
//     }

//     temp_node = current->next;
//     retval = temp_node->val;
//     current->next = temp_node->next;
//     free(temp_node);

//     return retval;

// }


/*

    Exercise:

    You must implement the function remove_by_value which receives a double pointer to the head and removes the first item in the list which has the value val.

*/

typedef struct node {
    int val;
    struct node* next;
} node_t;

void print_list(node_t* head) {
    node_t* current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(node_t** head) {
    int retval = -1;
    node_t* next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_by_value(node_t** head, int val) {

    /*
        1. Iterate over all nodes till we find the node before the one we want to delete
        2. Save the node we want to delete in a temporary pointer
        3. Point the previous node to the node after the node we want to delete
        4. Delete the node using the temporary pointer using free()

        TODO: fill in your code here

    */

    node_t* current_node, * previous_node;

    printf("Head: %p\n", *head);
    printf("Head value: %d\n", (*head)->val); // returns 1 - first one in list

    // if (*head == NULL) {
    //     /* return -1 is used when we don't get the expected output. We expect a value here, not NULL */
    //     return -1;
    // }

    // /* If val = 1, remove the node with val = 1*/
    // if ((*head)->val == val) {
    //     return pop(head);
    // }

    /* Now, we jump to the next node. The first node is now the previous_node, and the currently selected is the current_node */
    previous_node = *head;
    current_node = (*head)->next;

    printf("Previous Node Address: %p\n", previous_node);
    printf("Previous Node Value: %d\n", previous_node->val);
    printf("Current Node Address: %p\n", current_node);
    printf("Current Node Value: %d\n", current_node->val);



    while (current_node) {
        if (current_node->val == val) {
            printf("Old previous node's address: %p\n", previous_node->next);
            printf("Current node addr: %p\n", current_node);

            /*
                The bellow statement sets the previous nodes address for the next node to be the one after the one we want to delete
                This frees up the current node to be deleted

                uncomment the printf statements to view the addresses and confirm

            */
            previous_node->next = current_node->next;

            // printf("New previous node's address: %p\n", previous_node->next);
            // printf("Node of val = 3: %p\n", current_node->next);
            free(current_node);
            return val;
        }

        previous_node = current_node;
        current_node = current_node->next;
    }

    return -1;

}

int main() {

    node_t* test_list = (node_t*)malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t*)malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t*)malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t*)malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    remove_by_value(&test_list, 3);

    // print_list(test_list);
}
