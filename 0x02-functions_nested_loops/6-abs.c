#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that prints out the absolute value of a number
 *
 * @n: an integer
 *
 * Return: absolute
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
