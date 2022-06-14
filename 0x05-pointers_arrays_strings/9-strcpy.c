#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - a function that copies th string pointed to by src
 * @dest: a string character
 * @src: a string character
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	len = strlen(src);
	for (int i = 0; i < len + 1; i++)
		dest[i] = src[i];

	return (dest);
}
