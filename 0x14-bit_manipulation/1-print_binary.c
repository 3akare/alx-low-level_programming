#include "main.h"

/**
 * print_binary - converts numbers from base 10 to base 2
 * @n: the number to be converted
 *
 * return: Always Successfully
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
