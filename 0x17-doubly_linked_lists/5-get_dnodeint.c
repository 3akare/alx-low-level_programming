#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a  dlistint_t list
 * @head: a dlistint_t list
 * @index: the nth node
 *
 * Return: address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index == idx)
			return (head);
		head = head->next;
		idx++;
	}
	return (NULL);
}

