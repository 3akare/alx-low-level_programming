#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: str
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len, len2, i, max_len;
	char *str;

	len = strlen(s1);
	len2 = strlen(s2);
	max_len = len + len2;
	str = malloc(sizeof(char) * max_len + 1);
	if (!str)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < max_len; i++)
	{
		str[len + i] = s2[i];
	}
	str[i] = '\0';
	return (str);
}
