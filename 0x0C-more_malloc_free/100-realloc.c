#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - allocates a memory block using malloc and free
 * @ptr: a void pointer
 * @old_size: old_size in bytes allocated to ptr
 * @new_size: new_size in bytes allocated to ptr
 *
 * Return: a void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		ptr = new_ptr;
		free(new_ptr);
		return (ptr);
	}
	return (NULL);
}
