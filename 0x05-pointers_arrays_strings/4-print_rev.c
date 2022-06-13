#include <stdio.h>
#include "main.h"

/**
 * print_rev - a functions that prints a string
 * @s: a variable
 * Return: Always 0;
 */

void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);
	_putchar('\n');
}
