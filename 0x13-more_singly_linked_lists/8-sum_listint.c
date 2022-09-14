#include "lists.h"

/**
 * sum_listint - sum all the data(n) of a
 * listint_t list
 * @head: a listint_t list
 * Return: the sum of all data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
