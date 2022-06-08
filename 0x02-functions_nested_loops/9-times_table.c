#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
 * times_table - a function that prints out the 9 times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int k;

	for (k = 0; k <= 9; k++)
	{
		_putchar(48);
		for (i = 0; i <= 9; i++)
		{
			int u;

			u = k * i;
			_putchar(44);
			_putchar(32);
			if (i <= 9)
			{
				_putchar(32);
				_putchar(u + 48);
			}
			else
			{
				_putchar((u / 10) + 48);
				_putchar((u % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
