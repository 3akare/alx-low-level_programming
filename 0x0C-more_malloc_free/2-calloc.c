#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members of the array
 * @size: size of an individual character
 *
 * Return: NULL if fail, a void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	char *filler;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	filler = mem;
	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (mem);
}
