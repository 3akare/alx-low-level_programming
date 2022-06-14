#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - prints arrays in reverse
 * @s: an array
 */

void rev_string(char *s)
{
	int i, len = strlen(s);
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_putchar('\n');
}
