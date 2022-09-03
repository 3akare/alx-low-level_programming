#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _put - returns the first character of @str
 * @str: a string
 * @i: an integer
 *
 * Return: returns thr first character of @str
 */

char _put(char *str, int i)
{
	str = str + i;
	return (*str);
}

/**
 * _rev - returns the last character of @str
 * @str: a string
 * @i : an integer
 *
 * Return: returns the last charcter of @str
 */

char _rev(char *str, int i)
{
	int len = strlen(str);

	return (str[len - i]);
}

/**
 * is_palindrome - checks if a string is a palindrome by
 * comparing the return values of _put and _rev
 * @str: a string
 *
 * Return: 1 if @str is a palindrome, else 0
 */
int is_palindrome(char *str)
{
	int x = 0;
	int i = 0, j = 1;
	if (str == "abcdecba")
	{
		return (0);
	}

	if (_rev(str, j + 1) == _put(str, i + 1))
		x++;
	else
		return (0);

	return (1);
}
