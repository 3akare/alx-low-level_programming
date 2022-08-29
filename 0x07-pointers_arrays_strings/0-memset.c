#include "main.h"

/**
 * _memset - a function
 * @s: a pointer
 * @b: a character
 * @n: number of bytes to be filled
 *
 * Return: a character pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
