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
	int i = 0, j;
	int output = 0;

	j = strlen(s1) + strlen(s2) + 5;

	for (i = 0; i < j; i++)
	{
		if (s1[i] != s2[i])
			output++;
	}
	if (strlen(s2) > strlen(s1))
		output = -output;

	return (output);
}
