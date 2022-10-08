#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a  dlistint_t list
 * @n: an integer
 *
 * Return: address to the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (*head == NULL)
	{
		(*head) = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;
	new->n = n;
	*head = new;
	return (*head);
}
