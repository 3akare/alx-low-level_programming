#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in sorted array of integers
 * using interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: is the number og elements in array
 * @value: The value to be found
 *
 * Return: The first index where value is located on success, and -1 on fail
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, m = 0;

	l = 0;
	h = size - 1;
	if (array == NULL)
		return (-1);
	while (l <= h)
	{
		m = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (m < size)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			h = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}
