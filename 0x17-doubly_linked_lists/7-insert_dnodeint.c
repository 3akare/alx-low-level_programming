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
	unsigned int index = 0;
	dlistint_t *new, *temp;

	new =  malloc(sizeof(dlistint_t));
	temp = *h;
	while (temp != NULL)
	{
		if (idx == index)
		{
			temp->prev->next = new;
			temp->prev = new;
			new->next = temp;
			new->n = n;
		}
		temp = temp->next;
		index++;
	}
	return (new);
}
