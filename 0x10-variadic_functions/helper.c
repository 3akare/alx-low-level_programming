#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

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
