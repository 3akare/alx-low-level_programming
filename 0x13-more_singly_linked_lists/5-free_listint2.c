#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: a listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	free(temp);
}
