#include <stdio.h>

/**
 * main - a function that prints its filename
 *
 * @argc: CLI arguments count
 * @argv: CLI arguments vectors (in a char array)
 *
 * Return: Always Success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
