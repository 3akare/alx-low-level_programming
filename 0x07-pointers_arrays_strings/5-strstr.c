#include "main.h"
/**
 * _strstr - finds the first occurence of @needle in the @haystack
 * @haystack: a string
 * @needle : a string
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int idx;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		idx = 0;
		if (haystack[idx] == needle[idx])
		{
			do {
				if (needle[idx + 1] == '\0')
					return (haystack);
				idx++;
			} while (haystack[idx] == needle[idx]);
		}
		haystack++;
	}
	return (NULL);
}
