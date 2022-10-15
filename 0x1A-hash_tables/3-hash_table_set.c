#include "hash_tables.h"
/**
 * hash_table_set - adds an elementto the hash table
 * @ht: A hash table
 * @key: The key
 * @value: the value
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *value_copy;

	if (!key || !ht || !value || *key == '\0')
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/*
    * for (i = 0; ht->array[i]; i++)
	* {
	*	if (strcmp(ht->array[i]->key, key) == 0)
	*	{
	*		free(ht->array[i]->value);
	*		ht->array[i]->value = value_copy;
	*		return (1);
	*	}
    * }
	*/
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
