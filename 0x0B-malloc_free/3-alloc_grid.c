#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimenstinal array of integer
 * @width: width of the array
 * @height: height of the address
 *
 * Return: a pointer to the grid , or NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **d_array;

	if (width <= 0 || height <= 0)
		return (NULL);
	d_array = malloc(sizeof(int *) * height);
	if (!d_array)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		d_array[i] = malloc(sizeof(int) * width);
		if (!d_array[i])
		{
			for (; i < height; i--)
				free(d_array[i]);
			free(d_array[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			d_array[i][j] = 0;
		}
	}
	return (d_array);
}

