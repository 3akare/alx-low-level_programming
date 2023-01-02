#include "search_algos.h"
/**
 * linear_search - Searches for a vlaue in an array of integers
 * using the Linear search algorithm
 * @array: A pointer to the first element of the array
 * @size: Is the number of elements in @array
 * @value: Is the value to search for
 *
 * Return: index of value on success, and -1 on fail
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
