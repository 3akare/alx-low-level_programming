#include "lists.h"


int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    int k = 0;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    // head = NULL;
    // node = add_nodeint(&head, 0);
    // add_nodeint(&head, 1);
    // add_nodeint(&head, 2);
    // add_nodeint(&head, 3);
    // add_nodeint(&head, 4);
    // node->next = add_nodeint(&head, 98);
    // add_nodeint(&head, 402);
    // add_nodeint(&head, 1024);
    // print_listint_safe(head);

    k = check_cycle(head2);
    printf("cycled %d\n", k);
    return (0);
}