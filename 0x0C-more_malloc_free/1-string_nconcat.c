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
	int len1, len2, i = 0, index = 0;
	unsigned int j = 0;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[index] = s1[i];
		index++;
	}
	for (j = 0; j < n; j++)
	{
		str[index] = s2[j];
		index++;
	}
	str[index] = '\0';
	return (str);
}
