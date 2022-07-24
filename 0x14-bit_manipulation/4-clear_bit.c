#include "main.h"

/**
 * clear_bit - converts the bit in @n int position @index to 0
 * @index: the position to be changed
 * @n: unsigned long int
 *
 * Return: Always Successful
 */

int clear_bit(unsigned long int *n, unsigned long int index)
{
	if ((index >= sizeof(long) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
