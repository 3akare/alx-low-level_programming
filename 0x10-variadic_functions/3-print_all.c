#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: success
 */

void print_all(const char * const format, ...)
{
	unsigned long int i = 0, j = 0;
	char *seperator = ", ";
	va_list args;
	printer_t funcs[] = {
		{'c', print_char},
		{'i', print_integer},
		{'s', print_string},
		{'f', print_float}
	};

	va_start(args, format);
	while (format[i])
	{
		j = 0;
		while (j  < 4)
		{
			if (format[i] == funcs[j].symbol)
			{
				funcs[j].print(args);
				if (!(i == strlen(format) - 1))
					printf("%s", seperator);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
