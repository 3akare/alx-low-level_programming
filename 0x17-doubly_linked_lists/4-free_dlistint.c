#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a linked list
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head != NULL && head->next != NULL)
	{
		head = head->next;
		if (head->prev)
			free(head->prev);
	}
	free(head);
}
