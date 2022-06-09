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
	int u;

	for (k = 0; k <= 9; k++)
	{
		putchar(48);
		for (i = 1; i <= 9; i++)
		{
			u = k * i;
			putchar(44);
			putchar(32);
			if (i <= 9)
			{
				if (u < 10)
				{
					putchar(32);
					printf("%d", u);
				}
				else
					printf("%d", u);
			}
			else
			{
				putchar(u / 10);
				putchar(48);
				putchar(u % 10);
				putchar(48);
			}
		}
		putchar('\n');
	}
}
