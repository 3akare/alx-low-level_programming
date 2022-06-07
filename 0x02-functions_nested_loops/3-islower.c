#include <stdio.h>
#include "main.h"

/**
 * test_islower - a function that return 1 or 0 depending on the value of "c"
 *
 * Return: Always 0 (Success)
 */

int test_islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
