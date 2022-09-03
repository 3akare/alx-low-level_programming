#include "lists.h"

size_t sum_dlistint(const dlistint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum += h->n;
		h = h->prev;
	}
	return (sum);
}
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
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    // free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}