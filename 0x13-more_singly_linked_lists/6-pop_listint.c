#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked
 * list and return the head node's data(n)
 * @head: the address of a listint_t list
 * Return: the popped off head
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *new;

	new = *head;
	value = new->n;
	*head = (*head)->next;
	free(new);
	return (value);
}
int main(void)
{
    listint_t *head;
    int n;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}