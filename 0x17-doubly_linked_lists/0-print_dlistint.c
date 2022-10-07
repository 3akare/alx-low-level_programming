#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a dlistint_t list
 *
 * Return: the number of elements in @h*
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
