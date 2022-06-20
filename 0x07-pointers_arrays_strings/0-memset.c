#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to by s
 * with th constant byte b
 * @s: A pointer to the memory area to be filled.
 * @b: charcter to fill the memory area with.
 * @n: the bytes of memory to be filled
 *
 * Return: Always Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
