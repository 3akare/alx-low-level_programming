#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9, excluding 2 and 4 
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	
	int number;

	for (number = 48; number < 58; number++)
		if (number != '2' && number != '4')
			_putchar(number);
	_putchar('\n');
}
