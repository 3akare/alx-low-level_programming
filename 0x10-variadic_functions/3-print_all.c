#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_char - prints out character
 * @args: a list of arguments pointing to the character to be printed
 *
 * Return: success
 */

void print_char(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	printf("%c", letter);
}
/**
 * print_integer - prints out integers
 * @args: a list of arguments pointing to the integer to be printed
 *
 * Return: success
 */

void print_integer(va_list args)
{
	int integer;

	integer = va_arg(args, int);
	printf("%d", integer);
}

/**
 * print_float - prints out float
 * @args: a list of arguments pointing to the float to be printed
 *
 * Return: success
 */

void print_float(va_list args)
{
	float number;

	number = va_arg(args, double);
	printf("%f", number);
}

/**
 * print_string - prints out string
 * @args: a list of arguments pointing to the float to be printed
 *
 * Return: success
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: success
 */

void print_all(const char * const format, ...)
{
	unsigned long int i = 0, j = 0;
	char *seperator = "";
	va_list args;
	printer_t funcs[] = {
		{'c', print_char},
		{'i', print_integer},
		{'s', print_string},
		{'f', print_float}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (*(format + i)) != funcs[j].symbol)
			j++;
		if (j < 4)
		{
			printf("%s", seperator);
			funcs[j].print(args);
			seperator = ", ";
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
