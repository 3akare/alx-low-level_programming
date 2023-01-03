#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: A pointer to an array of integers
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index on success, and (-1) on fail
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, step, prev, i;

	jump = 0;
	step = sqrt(size);
	if (size == 0 || array == NULL)
		return (-1);

	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += step;
		if (array[jump] > value && value < (int)jump)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);
	for (i = prev; i < jump + 1 && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
