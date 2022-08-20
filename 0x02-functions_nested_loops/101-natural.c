#include "main.h"

/**
 * main - computes and prints the sum of all the muliple of 3 or
 * 5 below 1024
 *
 * Return: Always Successful
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
