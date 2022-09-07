#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *outcome;
	va_list strings;

	va_start(strings, n);
	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		outcome = va_arg(strings, char *);
		if (!outcome)
			outcome = "(nil)";
		if (i != n - 1)
		{
			printf("%s", outcome);
			printf("%s", separator);
		}
		else
			printf("%s\n", outcome);
	}
	va_end(strings);
}
