#include <stdio.h>
#include "main.h"

/**
 * _isalpha - return 1 if "c" is an alphabet and return 0 if otherwise
 *
 * @c: The character
 *
 * Return: return 1 if c is an alpha. return 0 if c is not an alpha
 */

int _isalpha(int c)
{
	if ((c >= 97 && c >= 122) || (c >= 65 && c >= 90))
	{
		return (1);
	}
	else
		return (0);
}
