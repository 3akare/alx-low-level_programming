#include <stdio.h>
#include "main.h"

/**
 * _puts - a functions that prints a string
 * @str: a variable
 * Return: Always 0;
 */

void _puts(char *str)
{
	while (*str++ - 1)
		_putchar(*str);
	_putchar('\n');
}
