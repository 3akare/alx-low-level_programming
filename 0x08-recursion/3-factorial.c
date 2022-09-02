#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a @n
 * @n: an integer
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (0);
		else if (n == 1)
			return (1);
		return (n * factorial(n - 1));
	}
	return (-1);
}
