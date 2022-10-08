#include "lists.h"

/**
 * _puts - returns the character at index @i
 * @i: integer
 * @str: a string
 * Return: a character
 */

char _puts(char *str, int i)
{
	str = str + i;
	return (*str);
}

/**
 * _rev - returns the character at index @i
 * @i: integer
 * @str: a string
 * Return: a character
 */

char _rev(char *str, int i)
{
	int len = strlen(str);

	return (str[len - i]);
}
/**
 * is_palindrome - chaeck if a string is a palindrome
 * @str: a string
 *
 * Return: an integer
 */

int is_palindrome(char *str)
{
	int x = 0;
	int len = strlen(str), i, j;

	for (i = 0, j = 1; i < len; i++, j++)
	{
		if (_rev(str, j) == _puts(str, i))
			x++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - main function
 *
 * Return: Always EXIT_SUCCESS
 */

int main(void)
{
	int temp = 0, mul = 0, i = 100, j = 100;
	char result[8];

	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			mul = i * j;
			sprintf(result, "%d", mul);
			if (is_palindrome(result))
			{
				if (mul > temp)
					temp = mul;
			}
		}
	}

	printf("%d\n", temp);
	return (0);
}
