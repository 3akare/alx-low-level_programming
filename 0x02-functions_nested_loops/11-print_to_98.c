#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints out numbers till it gets to 98
 *
 * @c: an integer
 *
 * Return: number from c to 98
 */

int print_to_98(int c)
{
	c = 0;

	while (c <= 98)
	{
		if (c != 98)
		{
			putchar(c);
			putchar(44);
			putchar(32);
		}
		else
			putchar(c);
		c++;
	}
}
