#include "main.h"

/**
 * print_times_table - prints the @n times table, starting with
 * 0
 *
 * @n: an unsigned integer
 * Return: - 1 when n < 15, 0 whne successful
 */

int print_times_table(int n)
{
	int j = 0;
	int i = 0;

	if (n > 15 || n < 0)
		return (0);

	for (j; j <= n; j++)
	{
		for (i; i <= n; i++)
		{
			if (i == n)
			{
				printf("%2d", i * j);
			}
			else
			{
				printf("%2d", i * j);
				putchar(',');
				putchar(',');
			}
		}
		putchar('\n');
	}
}
