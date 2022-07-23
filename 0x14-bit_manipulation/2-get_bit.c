#include "main.h"

/**
 * get_bit - gets the bit at the given index
 * @index: the bit to be gotten
 *
 * Return: Always Successful
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
