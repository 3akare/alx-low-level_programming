#include "lists.h"

/*
// typedef struct list
// {
// 	int number;
// 	struct list *next;
// } list_t;

// void print_list(list_t *head)
// {
// 	while (head != NULL)
// 	{
// 		printf("%d\n", head->number);
// 		head = head->next;
// 	}
// }
// void free_list(list_t *head)
// {
// 	list_t *temp;

// 	while (head != NULL)
// 	{
// 		temp = head->next;
// 		free(head);
// 		head = temp;
// 	}

// }



// void delete_node(list_t **head, unsigned int index)
// {
// 	list_t *temp;
// 	unsigned int idx = 0;
// 	temp = malloc(sizeof(list_t));
// 	temp = *head;
	
// 	while (temp != NULL)
// 	{
// 		if (idx == index)
// 		{
// 			printf("%d\n", temp->number);
// 			break;
// 		}
// 		temp = temp->next;
// 		idx++;
// 	}
// }

// list_t *reverse_list(list_t *head, int index)
// {
// 	list_t *del_head = NULL;
// 	int idx;

// 	while (head != NULL)
// 	{
// 		if (idx == index)
// 			head = head->next;
// 		add_node(&del_head, head->number);
// 		head = head->next;
// 		idx++;
// 	}	

// 	return (del_head);
// }
*/

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
	delete_nodeint_at_index(&head, 5);
	print_listint(head);
    printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
    printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
    printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
    printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
    printf("-----------------\n");
    return (0);
}











