#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print all possible combinations of single-digits numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
