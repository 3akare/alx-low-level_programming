#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0 to 14, ten times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int k = 0;
	int l = 15;

	while (k < 10)
	{
		if (k != 10)
		{
			for (i = 0; i < l; i++)
				printf("%d", i);
			_putchar('\n');
		}
		else
			printf("%d", i);
		_putchar('\n');
		k++;
	}
}
