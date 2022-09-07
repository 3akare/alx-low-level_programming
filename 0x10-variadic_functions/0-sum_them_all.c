#include "main.h"
#include <stdio.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: an integer
 *
 * Return: the sum of all paramters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list num;

	va_start(num, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
