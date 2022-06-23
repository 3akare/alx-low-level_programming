#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: The string to be printed
 *
 * Return: Always Success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
