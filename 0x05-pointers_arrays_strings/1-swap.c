#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: an integer pointer
 * @b: an integer pointer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
