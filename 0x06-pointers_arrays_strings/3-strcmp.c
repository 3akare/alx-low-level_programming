#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - a function that compares 2 strings
 *
 * @s1: a string
 * @s2: a string
 *
 * Return: Always Success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
