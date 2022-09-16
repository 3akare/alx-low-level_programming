#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new, *copy;
    int len = 0;

    if (!*head)
        return (NULL);

    new = malloc(sizeof(listint_t));
    if (!new)
        return (NULL);

    copy = *head;
    new->n = n;

    if (idx == 0)
    {
        new->next = copy;
        *head = new;
        return (new);
    }

    while (len < (idx - 1))
    {
        if (!copy || !copy->next)
            return (NULL);
        copy = copy->next;
        len++;
    }
    new->next = copy->next;
    copy->next = new;

    return (new);
}

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
