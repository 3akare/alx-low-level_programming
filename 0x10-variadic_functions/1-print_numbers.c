#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: a string
 * @n: number of integers passed to the function
 * ...: A variable number of numbers to be printed
 * Return: always success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(numbers);
}
