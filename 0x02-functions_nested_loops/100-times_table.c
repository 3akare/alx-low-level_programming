#include "main.h"

/**
 * print_times_table - prints tha @n times table, starting
 * with 0
 *
 * @n: an integer greater than 0 and less than 15
 * Return: Always Successful
 */

int print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
		return (0);
	putchar('0');
	for (i = 0; i < n; i++)
	{
		putchar(',');
		printf("%4d", 0);
	}
	putchar('\n');
	for (j = 1; j < (n + 1); j++)
	{
		for (i = 0; i < (n + 1); i++)
		{
			prod = i * j;
			if (i == n)
				printf("%4d", prod);
			else
			{
				if (prod == 0)
					printf("%d", prod);
				else
					printf("%4d", prod);
				putchar(',');
			}
		}
		putchar('\n');
	}
	return (0);
}
