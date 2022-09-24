#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of a
 * listint_t list
 * @head: a listint_t list
 * @index: an integer
 * Return: the number of nodes in the list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int idx = 0;

	while (*head != NULL)
	{
		if (idx == index)
			*head = (*head)->next;
		add_nodeint_end(&temp, (*head)->n);
		*head = (*head)->next;
		idx++;
	}
	*head = temp;
	return (1);
}
