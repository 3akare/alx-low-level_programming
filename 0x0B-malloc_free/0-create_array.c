#include <stdio.h>
#include <stdlib.h>

/**
 * create_array: a function that creates an array of chars
 * @size: allocated size of the array
 * @c: content of the array
 *
 * Return: Always Success
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
