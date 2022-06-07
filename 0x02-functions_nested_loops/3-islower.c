#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that return 1 or 0 depending on the value of c
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
	putchar('\n');
}
