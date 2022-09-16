#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the address of a listint_t
 * @idx: the index of the list where the new node should be added
 * @n: an integer
 * Return: listint_t*
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new, *copy;
	int len = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	copy = *head;
	new->n = n;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	while (len < (idx - 1))
	{
		if (!copy || !copy->next)
			return (NULL);
		copy = copy->next;
		len++;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
