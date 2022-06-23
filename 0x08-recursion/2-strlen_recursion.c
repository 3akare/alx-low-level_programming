#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints out the lenght of a string
 * @s: The strinf measured
 *
 * Return: Akways Success
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
