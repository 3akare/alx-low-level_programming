#include "main.h"

/**
 * flip_bits - counts the no of to bits in @n that needs to be
 * flipped to become @m
 * @n: unsigned long int 1
 * @m: unsigned long int 2
 *
 * Return: Always Successful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
