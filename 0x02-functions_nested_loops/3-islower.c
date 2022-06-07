#include <stdio.h>
#include "main.h"

/**
 * test_islower - a function that return 1 or 0 depending on the value of c
 *
 * @c: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */

int test_islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
	putchar('\n');
}
