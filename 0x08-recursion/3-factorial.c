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
	if (n <= 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
