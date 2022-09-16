#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked
 * list and return the head node's data(n)
 * @head: the address of a listint_t list
 * Return: the popped off head
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *new;

	if (*head == NULL)
		return (0);
	new = *head;
	value = new->n;
	*head = (*head)->next;
	free(new);
	return (value);
}

