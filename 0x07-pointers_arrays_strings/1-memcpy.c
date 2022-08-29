#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination
 * @src: the source
 * @n: number of bytes to be copied and filled
 *
 * Return: a character pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
