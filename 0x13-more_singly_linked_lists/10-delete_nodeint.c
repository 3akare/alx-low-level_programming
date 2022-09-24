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
