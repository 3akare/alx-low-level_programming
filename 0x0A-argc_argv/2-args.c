#include <stdio.h>

/**
 * main - a function that prints out all arguments recieved
 *
 * @argc: arguments counts
 * @argv: arguments vectors
 *
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
