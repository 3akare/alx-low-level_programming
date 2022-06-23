#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - finds the value of @x to the power of @y
 *
 * @x: The number to be raised
 * @y: The power
 *
 * Return: Always Success
 */

int _pow_recursion(int x, int y)
{
	int t = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	t *= _pow_recursion(x, y - 1);

	return (t);
}
