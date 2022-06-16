#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: a pointer to the string
 * @src: a string to be appended to @dest
 *
 * Return: a pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index++];

	dest[index] = '\0';
	return (dest);
}
