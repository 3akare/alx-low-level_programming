#include <stdio.h>
#include "main.h"

/**
 * _isdigit - returns 1 if c is a digit and 0 if it isnt
 *
 * @c: an integer
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
