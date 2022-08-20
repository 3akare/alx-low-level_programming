#include "main.h"

/**
 * main - prints the first 50 fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * Return: Always Successful
 */

int main(void)
{
	unsigned long int i;
	unsigned long int j = 1;
	unsigned long int temp = 1;
	int k;


	for (i = 0, k = 0; k < 50; i++, k++)
	{
		if (temp == 20365011074)
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
