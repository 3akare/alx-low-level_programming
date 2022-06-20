#include "main.h"

/**
 * _memcpy - copies @n bytes from th e mo  from the memory area pointed
 * to by @src into the pointed to by @dest.
 * @dest: A pointer to the memory
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pouinter to the destination buffer from @src.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
