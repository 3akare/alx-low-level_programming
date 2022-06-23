#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints out a string
 * @s: The string to be printed out
 *
 * Return: Always Success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
