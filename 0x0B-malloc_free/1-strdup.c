#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 *
 * @str: the string to be relocated
 *
 * Return: Always Success
 */

char *_strdup(char *str)
{
	int index, len = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	newstr = malloc((len + 1) * (sizeof(char)));

	if (newstr == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		newstr[index] = str[index];

	newstr[len] = '\0';
	return (newstr);
}
