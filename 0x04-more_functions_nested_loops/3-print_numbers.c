#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print out numbers
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
		_putchar(number);
	putchar(number);
}
