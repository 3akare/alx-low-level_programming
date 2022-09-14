#include "lists.h"

/**
 * add_nodeint - returns the number elements of a
 * listint_t list
 * @head: a listint_t list
 * @n: an integer
 * Return: the number of nodes in the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		fprintf(stderr, "Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
