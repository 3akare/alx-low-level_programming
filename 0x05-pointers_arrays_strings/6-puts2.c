#include <stdio.h>
#include "main.h"

/**
 * _puts2 - a functions that prints a string
 * @str: a variable
 * Return: Always 0;
 */

void _puts2(char *str)
{
	int len = 0, index;

	while (str++)
		len++;

	for (index = 0; index < len; index = index + 2)
		_putchar(str[index]);
	_putchar('\n');
}
