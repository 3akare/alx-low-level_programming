#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: the address of the list_list
 * @str: a string
 * Return: a list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (!new)
	{   free(head);
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
	new->next = *head;
	*head = new;
	return (new);
}
