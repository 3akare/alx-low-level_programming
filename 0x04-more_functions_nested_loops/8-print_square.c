#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: 'size of the square'
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	size--;

	for (int i = 0; i <= size; i++)
	{
		for (int i = 0; i <= size; i++)
			putchar('#');
		putchar('\n');
	}
}
