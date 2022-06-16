#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that concatenates two strings.
 *
 * @dest: a pointer to the string
 * @src: a string to be appended to @dest
 * @n: an integer
 *
 * Return: a pointer to the destination string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (src[index++])
		len++;

	for (index = 0; index < n && src[index]; index++)
		dest[indexl] = src[index];

	for (index = len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
