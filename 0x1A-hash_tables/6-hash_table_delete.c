#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned int i = 0;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
		i++;
	}
	free(head->array);
	free(head);
}
