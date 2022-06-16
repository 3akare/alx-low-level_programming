#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s : a string
 * Return: Always Success
 */

char *cap_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if ((s[i] == 32 ||
		s[i] == 46 ||
		s[i] == '\n' ||
		s[i] == '\t') &&
		s[i + 1] >= 97 &&
		s[i + 1] <= 122)
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
