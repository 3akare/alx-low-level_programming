#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position
 * @h: address of linked list
 * @idx: position to insert node
 * @n: integer of new node
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;

	if (!h)
		return (NULL);

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
	}

	if (!temp->next)
		return (add_dnodeint_end(h, n));
	new =  malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
