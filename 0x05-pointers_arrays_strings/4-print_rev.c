#include <stdio.h>
#include "main.h"

/**
 * print_rev - a functions that prints a string
 * @s: a variable
 * Return: Always 0;
 */

void print_rev(char *s)
{
	int j = 0, i;

	while (s[i++])
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
