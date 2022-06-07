#include <stdio.h>
#include "main.h"

/**
 * print_sign - a function that prints out the sign of a number
 *
 * @n: a character
 *
 * Return: 1 if its positive and 0 if its negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	putchar('\n');
}
