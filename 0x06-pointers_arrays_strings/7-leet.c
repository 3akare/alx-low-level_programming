#include "main.h"

/**
 * leet - encode a string to 1337
 * @str: a string
 *
 * Return: Always Success
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}
		index1++;
	}
	return (str);
}
