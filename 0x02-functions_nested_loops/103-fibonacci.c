#include "main.h"

/**
 * main - a program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 *
 * Return: Always Successful
 */

int main(void)
{
	long_t i, j = 1, temp = 1, sum = 0;
	int k;

	for (i = 0, k = 0; k < 50; i++, k++)
	{
		if ((temp % 2) == 0)
			sum += temp;
		if (temp >= 4000000)
		{
			break;
		}
		i = j;
		j = temp;
		temp = i + j;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
