#include "hash_tables.h"
/**
 * key_index - Gets thr index at which a key/value pair
 * should be stored in an array of hash table
 *
 * @key: the key to get the index of.
 * @size: Size of the table's array
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
