#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: 'print combination of two digit numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;
	int beta;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (beta = alpha + 1; beta <= 9; beta++)
		{
			putchar(alpha + '0');
			putchar(ones + '0');

			if (alpha < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
