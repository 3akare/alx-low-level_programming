#include "lists.h"

/**
 * print_list - prints out all the elements in a
 * list_t list
 * @h: the head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[%d]", 0);
			printf("(nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
		}
		len++;
	}
	return (len);
}
