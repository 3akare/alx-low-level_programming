#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 * @n: the max length of @s2 that will be allocated
 *
 * Return: NULL if fail, and a string if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index, len = n;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len = strlen(s1);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	len = 0;

	for (index = 0; s1[index], index++)
		str[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		str[len++] = s1[index];
	str[index] = '\0';
	return (str);
}
