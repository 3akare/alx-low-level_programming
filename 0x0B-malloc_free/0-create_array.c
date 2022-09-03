#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initailaizes it
 * with a specific char
 * @size: the size of the array
 * @c: a character
 *
 * Return: if success 0, else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (!array || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
