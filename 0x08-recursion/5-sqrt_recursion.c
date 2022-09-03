#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - compares the square of @x with @n
 * @x: an integer that is squared and compared with n
 * @n: an integer
 *
 * Return: @x if the sqrt of @n is @x else -1
 */

int find_sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if (x < 0)
		return (-1);
	if (n == x / 2)
		return (-1);
	return (find_sqrt(n, (x + 1)));
}

/**
 * _sqrt_recursion - finds the square root of @n
 * @n: an integer
 *
 * Return: the sqrt of @n
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, x));
}
