#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiples CLI arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	int mul;

	argc -= 1;

	if (argc == 2)
		mul = (atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d", mul);
	return (0);
}
