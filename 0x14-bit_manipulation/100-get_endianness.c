#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 when big endian and 1 when little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;
	if (*c)
		return (1);
	else
		return (0);
}
