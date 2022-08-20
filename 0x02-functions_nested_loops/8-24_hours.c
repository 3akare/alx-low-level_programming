#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - a function that prints out the hours in a day
 *
 * Return: Always 0 (Success)
 */


void jack_bauer(void)
{
	int j, i;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%.2d:%.2d", i, j);
			putchar('\n');
		}
	}
}
