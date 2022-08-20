#include "main.h"

/**
 * main - prints the first 98 Fibonnacci numbers, starting
 * with 1 and 2, followed by a new line
 *
 * Return: Always Successful
 */

int main(void)
{
	unsigned long int i, j = 1, temp = 1;
	int k = 0;

	for (i = 0, k = 0; k <= 98; i++, k++)
	{
		if (k == 98)
		{
			printf("%ld", temp);
			break;
		}
		printf("%ld, ", temp);
		i = j;
		j = temp;
		temp = i + j;
	}
	putchar('\n');
	return (0);
}
