#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: a listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
