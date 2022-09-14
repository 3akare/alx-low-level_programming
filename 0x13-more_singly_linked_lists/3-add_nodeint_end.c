#include "lists.h"

/**
 * add_nodeint_end - returns the number elements of a
 * listint_t list
 * @head: a listint_t list
 * @n: an integer
 * Return: the number of nodes in the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		fprintf(stderr, "Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
