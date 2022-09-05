#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: the lenght of the array
 *
 * Return: Always success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index, len = n;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len += strlen(s1);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		str[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		str[len++] = s2[index];
	str[len] = '\0';
	return (str);
}
