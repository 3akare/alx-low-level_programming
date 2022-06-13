#include <stdio.h>
#include "main.h"

/**
 * _strlen - a functionthat returns the length of a string
 * @s: a char variable
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len_of_string = sizeof(s) / sizeof(*s);

	return (len_of_string);
}
