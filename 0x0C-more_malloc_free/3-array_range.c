#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an ordered array
 * @min: the first value
 * @max: the last value
 *
 * Return: always Success
 */

int *array_range(int min, int max)
{
	int len = 0, i;
	int *array;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;
	array = malloc(len * sizeof(int) + 1);
	if (!array)
		return (NULL);
	for (i = 0; i <= len; i++)
		array[i] = min++;
	return (array);
}
