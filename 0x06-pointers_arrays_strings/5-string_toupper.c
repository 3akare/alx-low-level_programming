#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * string_toupper - converts all lowercase to uppercase
 * @s: a string
 *
 * Return: Always Success
 */

char *string_toupper(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
		if (s[i] >= 97)
			s[i] = s[i] - 32;
		else
			s[i] = s[i];
	return (s);
}
