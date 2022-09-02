#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint list
 * @h: double linked list node structure
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
