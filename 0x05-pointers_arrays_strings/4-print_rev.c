#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints arrays in reverse
 * @s: an array
 */

void print_rev(char *s)
{
	int i;
	int temp = strlen(s);

	for (i = 0; i < temp; i++)
		_putchar(s[temp - i - 1]);
	_putchar('\n');
}
