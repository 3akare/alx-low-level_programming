#include <stdio.h>
#include "main.h"

/**
 * _puts2 - a functions that prints a string
 * @str: a variable
 * Return: Always 0;
 */

void _puts2(char *str)
{
	while (*str)
		_putchar(*str = *str + 2);
	_putchar('\n');
}
