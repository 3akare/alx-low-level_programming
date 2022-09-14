#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 *  a listint_t list
 * @head: a listint_t list
 * @index: index of the node starting at 0
 * Return: listint_t*
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len = 0;

	while (head != NULL)
	{
		if (len == index)
			return (head);
		head = head->next;
		len++;
	}
    return (NULL);
}
