#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints out the alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

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
