#include <stdio.h>
#include "main.h"

/**
 * reverse_array - prints out the content of an array in reverse
 * @a: the integer array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d", a[n - 1]);
			putchar(44);
			putchar(32);
		}
		else
			printf("%d", a[n - 1]);
	}
	putchar('\n');
}
