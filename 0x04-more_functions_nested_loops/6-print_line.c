#include <stdio.h>
#include "main.h"

/**
 * print_line - print out n number of lines
 * @n: a variable
 * Return: Always 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
