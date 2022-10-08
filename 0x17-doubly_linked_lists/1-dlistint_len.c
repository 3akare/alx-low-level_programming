#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a
 * dlistint_t list
 *
 * @h: a dlistint_t list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (NULL);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
