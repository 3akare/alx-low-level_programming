#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * list
 * @head: The address of the list_t list
 * @str: a string
 * Return: list_t*
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(head);
		fprintf(stderr, "Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		free(head);
		fprintf(stderr, "Error\n");
		return (NULL);
	}
	new->len = strlen(new->str);
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
}
