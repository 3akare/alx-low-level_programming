#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all nu,bers
 * @n: an unsigned integer
 *
 * Return: Always success
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;

	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
