#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that prints diagonal lines
 * @n: 'an integer'
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		for (int i = 0; i < n; i++)
			putchar('\\');
		putchar('\n');
	}
}
