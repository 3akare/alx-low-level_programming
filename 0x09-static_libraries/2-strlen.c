#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (*str++)
		length++;

	return (length);
}
