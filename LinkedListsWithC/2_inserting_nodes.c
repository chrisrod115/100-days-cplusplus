#include <stdio.h>
#include <stdlib.h>

// Creating the linked list on the stack
typedef struct node 
{
    int value;
    struct node *next;
} Node;

void print_list(Node *head);

Node *insert_at_head(Node *head, int new_value);

int main()
{
    Node *list1_head = NULL;
    list1_head = insert_at_head(list1_head, 7);
    list1_head = insert_at_head(list1_head, 5);
    list1_head = insert_at_head(list1_head, 3);
    print_list(list1_head);
    return 0;
}

Node *insert_at_head(Node *head, int new_value)
{
    Node *new_node = calloc(1, sizeof(Node));
    new_node->value = new_value;
    if (head == NULL) return new_node;
    else
    {
        new_node->next = head;
        return new_node;
    }
}

void print_list(Node *head)
{
    Node *current;
    current = head;
    int i = 0;
    while (current != NULL)
    {
        printf("Node %d: %d\n", i, current->value);
        i++;
        current = current->next;
    }
}
