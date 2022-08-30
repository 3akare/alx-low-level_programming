#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string @s
 * of any of the bytes in the string accept
 * @s: a character pointer
 * @accept: a character pointer
 *
 * Return: a pointer to the bytes in @s that matches one of the
 * bytes in @accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int idx1 = 0, idx2 = 0;

	while (s[idx1])
	{
		for (idx2 = 0; accept[idx2]; idx2++)
		{
			if (s[idx1] == accept[idx2])
				return (s + idx1);
		}
		idx1++;
	}
	return (NULL);
}
