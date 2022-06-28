#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 *
 * @grid: the grid to be freed
 * @height: the height of the grid
 *
 * Return: Always success
 */

void free_grid(int **grid, int height)
{
	int index;
	
	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
