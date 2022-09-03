#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a string
 * Return; Always Successfully
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		exit(0);
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
