#include "main.h"
#include <stdio.h>

/**
 * alphabets - prints out the alphabets
 *
 * Return: Always 0 (Success)
 */

void alphabets(void)
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
