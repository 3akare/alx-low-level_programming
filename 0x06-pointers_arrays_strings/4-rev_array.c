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
		if (i != n)
		{
			printf("%d", a[n - i]);
			putchar(44);
			putchar(32);
		}
		else
			printf("%d", a[n - i]);
	}
	printf("%d", a[0]);
	putchar('\n');
}
