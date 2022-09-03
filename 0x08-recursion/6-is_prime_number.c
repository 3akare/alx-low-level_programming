#include "main.h"
#include <stdio.h>

/**
 * prime - checks if @n is a prime number
 * @n: an integer
 * @k: an integer
 * Return: Always Successful
 */
int prime(int n, int k)
{
	if (n % k == 0)
		return (0);
	if (k == n / 2)
		return (1);
	return (prime(n, (k + 1)));
}

/**
 * is_prime_number - returns 1 if @n is a prime number
 * otherwise return (0)
 * @n: an integer
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int k = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (0);
	return (prime(n, k));
}
