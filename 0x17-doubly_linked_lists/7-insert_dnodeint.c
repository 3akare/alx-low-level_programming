#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position
 * @h: address of linked list
 * @idx: position to insert node
 * @n: integer of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int index = 0;
    dlistint_t *new = malloc(sizeof(dlistint_t));
    /** needs work**/

    while (*h != NULL && (*h)->next != NULL)
    {
        if (idx == index)
        {
            (*h)->next = new;
            new->next = (*h)->next;
            new->n = n;
            new->prev = *h;
            (*h)->next->prev = new;
            *h = new;
        }
        *h = (*h)->next;
        index++;
    }
    return (new);
}
