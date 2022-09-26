#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: address of a linked lint
 *
 * Return: always succesful
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL, *next = NULL, *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
