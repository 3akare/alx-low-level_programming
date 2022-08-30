#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: a character pointer
 * @accept: a character pointer
 * Return: the number of bytes in the initial segment of @s
 * which consist only of buytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	int bytes = 0;

	while (s[j])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
