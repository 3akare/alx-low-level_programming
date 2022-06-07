#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - a function that prints the alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char  alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
