#include <stdio.h>
#include "main.h"

/**
 * print_rev - a functions that prints a string
 * @s: a variable
 * Return: Always 0;
 */

void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i])
		j++;
	for (i = 0; i < j; i--)
		_putchar(s[i]);
	_putchar('\n');
}
