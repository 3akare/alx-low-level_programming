#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the
 * value
 * @x: an integer
 * @y: an integer
 *
 * Return: exponential value of x
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	res *= _pow_recursion(x, y - 1);
	return (res);
}
