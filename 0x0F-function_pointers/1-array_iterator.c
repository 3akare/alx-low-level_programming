#include "function_pointers.h"

/**
 * array_iterator - Executes a function
 *
 * @array: the array
 * @size: the size of array
 * @action: a pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
