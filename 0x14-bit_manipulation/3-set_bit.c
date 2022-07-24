#include "main.h"

/**
 * set_bit - converts the bit in @n in position @index to 1
 * @index: the position to be changed
 * @n: unsigned long int
 *
 * Return: Always Successful
 */

int set_bit(unsigned long int *n, unsigned long int index)
{
	if ((index >= sizeof(long) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
