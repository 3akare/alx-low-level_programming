#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: a character pointer
 *
 * Return: a character pointer
 */

char *rot13(char *str)
{
	int i = 0, j;
	char *ptr;
	char alpha1[13] = "abcdefghijklm";
	char alpha2[13] = "nopqrstuvwxyz";

	ptr = malloc(strlen(str) * sizeof(char));
	strcpy(ptr, str);

	while (ptr[i])
	{
		for (j = 0; j <= 12; j++)
		{
			if (ptr[i] >= 'A' && ptr[i] <= 'Z')
			{
				if (ptr[i] == (alpha1[j] - 32))
					ptr[i] = (alpha2[j] - 32);
				else if (ptr[i] == (alpha2[j] - 32))
					ptr[i] = (alpha1[j] - 32);
			}
			else if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				if (ptr[i] == alpha1[j])
					ptr[i] = alpha2[j];
				else if (ptr[i] == alpha2[j])
					ptr[i] = alpha1[j];
			}
		}
		i++;
	}
	strcpy(str, ptr);
	free(ptr);
	return (str);
}
