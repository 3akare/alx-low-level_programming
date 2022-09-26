#include "function_pointers.h"

/**
 * array_iterator - Executes a function
 *
 * @array: the array
 * @size: the size of array
 * @action: a pointer
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i = 0;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(i);
	}
}
