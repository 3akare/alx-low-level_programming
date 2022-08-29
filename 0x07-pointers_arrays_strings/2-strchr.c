#include "main.h"

/**
 * _strchr - loacates a character in a string
 * @s: a string
 * @c: a character
 *
 * Return: A character pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
