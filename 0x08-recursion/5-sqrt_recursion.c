#include <stdio.h>
#include "main.h"

/**
 * find_sqrt - a function to find natural square root
 * @num: th e integer to find the sqrt of
 * @root: the root to be tested
 *
 * Return: Always success
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns th enatural sqrt of a number
 * @n: the number to return the sqrt of
 *
 * Return: Always Success
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
