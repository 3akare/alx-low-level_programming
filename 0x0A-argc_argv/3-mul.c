#include <stdio.h>

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
	if (1 < argc)
	{
		mul = (atoi(argv[1] * atoi(argv[2])));
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
