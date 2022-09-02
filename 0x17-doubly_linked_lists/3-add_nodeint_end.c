#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of
 * a dlistint_t list
 * @head: address of a node structure
 * @n: data
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *temp = *head;

	new_node->n = n;
	new_node->next = NULL;
	if ((*head) == NULL)
		new_node->prev = NULL;
        *head = new_node;
        return ((*head));
	while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return(*head);    
}
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}