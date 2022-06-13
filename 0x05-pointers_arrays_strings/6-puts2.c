#include <stdio.h>
#include "main.h"

/**
 * puts2 - a functions that prints a string
 * @str: a variable
 * Return: Always 0;
 */

void puts2(char *str)
{
	int len = 0, index;

	while (str[index++])
		len++;

	for (index = 0; index < len; index = index + 2)
		_putchar(str[index]);
	_putchar('\n');
}
