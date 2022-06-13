#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a string
 */

void puts_half(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;
	len = len / 2;
	for (index = 0; index < len; index--)
		_putchar(str[index]);
	_putchar('\n');
}
