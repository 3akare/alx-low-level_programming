#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints out the alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	char alpha;
	int number;

	while (number <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		number++;
	}
}
