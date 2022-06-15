#include <stdio.h>
#include "main.h"

/**
 * _atoi - a function that converts strings to integers
 * @s: the string
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	}
	return (num * sign);
}
