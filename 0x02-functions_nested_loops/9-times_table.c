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
	int k = 0;

	while (k <= 9)
	{
		for (i = 0; i <= 10; i++)
		{
			int u;

			u = k * i;
			printf("%d,  ", u);
			if (i > 9)
				printf("%d", u);
		}
		putchar('\n');
		k++;
	}
}
