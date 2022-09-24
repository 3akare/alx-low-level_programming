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
	listint_t *temp, *copy = *head;
	unsigned int idx = 0;

	if (!copy)
		return (1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (idx = 0; idx < (index - 1); idx++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
