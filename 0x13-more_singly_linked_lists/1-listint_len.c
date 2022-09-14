#include "lists.h"

/**
 * listint_len - returns the number elements of a
 * listint_t list
 * @h: a listint_t list
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
