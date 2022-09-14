#include "lists.h"

/**
 * list_len - return the number of element in a list_t list
 * @h: the list_t list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while  (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
