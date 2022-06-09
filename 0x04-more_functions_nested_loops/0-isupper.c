#include <stdio.h>
#include "main.h"

/**
 * _isupper - is returns 1 if  c is in uppercase and 0 if its not
 *
 * @c: an integer
 */

int _isupper(int c)
{
	if (c >= 65) && (c <= 90)
		return (1);
	else
		return (0);
}
