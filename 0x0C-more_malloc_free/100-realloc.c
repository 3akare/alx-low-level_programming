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
	void *mem;
	char *filler, *ptr_copy;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr_copy = ptr;
		mem = malloc(sizeof(*ptr_copy) * new_size);
		if (!mem)
			return (NULL);
		filler = mem;
		for (i = 0; i < old_size && i < new_size; i++)
			filler[i] = *ptr_copy++;
		free(ptr);
		return (mem);
	}
	return (NULL);
}
