#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string to 1337
 * @str: a character pointer (string)
 *
 * Return: Always Succes
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leet_integer[10] = { a, A, e, E, o, O, t, T, l, L};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 10; index2++)
		{
			if (str[index1] == leet[index2])
				str[index1] = leet_integer[index2] + '0';
		}
		index1++;
	}
	return (str);
}
