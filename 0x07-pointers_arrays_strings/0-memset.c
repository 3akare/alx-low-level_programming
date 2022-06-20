#include "main.h"

/**
 * _memset - a function
 * @s: a pointer
 * @b: a character
 * @n: number of bytes to be filled.
 *
 * Return: Always Success
 */

char *_memset(void *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
