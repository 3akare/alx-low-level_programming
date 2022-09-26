#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array
 * @size: the size of the array
 * @cmp: a pointer
 *
 * Return: 0 or -1
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
