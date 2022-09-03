#include "main.h"
#include <stdio.h>

/**
 * strlen_no_wilds - finds the length of a string with
 * no wild character
 * @str: a string
 * Return: elnght of a string with no wild character
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;
		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}

/**
 * iterate_wild - iterates through @wildstr till
 * it finds a non wild character
 * @wildstr: the address of a string
 *
 * Return: Always Successful
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - checks if @str matches @postfix
 * @str: a string
 * @postfix: a string potential containing a wild
 * character
 *
 * Return: @postifx
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - compares two string and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: a string
 * @s2: a string containing a wild character
 * Return: 1 if @s1 and @s2 are identical, else return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
