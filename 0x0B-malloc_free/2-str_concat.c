#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: Always Success
 */

char *str_concat(char *s1, char *s2)
{
	int len, index, con_index = 0;
	char *con_cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	con_cat = malloc(len * sizeof(char));

	if (con_cat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		con_cat[con_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		con_cat[con_index++] = s2[index];

	return (con_cat);
}
