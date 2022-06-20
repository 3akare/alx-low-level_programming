#include "main.h"

/**
 * _memcpy - a function
 * @dest: a pointer to the memory
 * @src: The source buffer to be copied
 * @n: the no of bytes to copy from @src
 *
 * Return: Always Success
 */

void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
