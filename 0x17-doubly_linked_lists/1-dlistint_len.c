#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * a doubly linked list
 * @h: doubly linked list node structure
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
