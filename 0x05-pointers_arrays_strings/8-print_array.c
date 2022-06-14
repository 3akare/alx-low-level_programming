#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - a function that prints n the elemnets of an array of integers
 * @a: an array of integers
 * @n: the length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (1 < (n - 1))
		{
			printf("%d", a[i]);
			_putchar(44);
			_putchar(32);
		}
		else
			printf("%d", a[i]);
	putchar('\n');
}
