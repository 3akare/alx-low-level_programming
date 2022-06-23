#include <stdio.h>
#include "main.h"

/*
 * factorial - prints  out the factorial of @n
 * @n: an integer
 *
 * Return: Always Success
 */

int factorial(int n)
{
	int t = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	t *= factorial(n - 1);

	return (t);
}
