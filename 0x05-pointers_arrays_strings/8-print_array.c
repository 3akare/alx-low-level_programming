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
	int len = n - 1;

	for (i = 0; i < n; i++)
		if (i != len)
		{
			printf("%d", a[i]);
			putchar(44);
			putchar(32);
		}
		else
			printf("%d", a[i]);
	putchar('\n');
}
