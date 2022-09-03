#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _isalpha - check if @c is an alphabet
 * @c: an integer
 *
 * Return: 1 if success, 0 if fail
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

/**
 * main - add all positive CLI arguments
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0 if succesful, and 1 if fail
 */

int main(int ac, char *av[])
{
	int sum = 0, i, j = 0;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			if (_isalpha(av[i][j]) == 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(av[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(av[i]);
	}
	printf("%d\n", sum);
	return (0);
}

