#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonal
 * of a square matrix of integers
 * @a: a multidimensional array of integers
 * @size: size of the matrix
 *
 * Return: Always successfully
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	for (i = 0; i < size; i++)
	{
		a -= size;
	}
	a += (size - 1);
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a += (size - 2);
	}
	printf("%d, %d\n", sum1, sum2);
}
