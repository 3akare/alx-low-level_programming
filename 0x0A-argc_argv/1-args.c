#include <stdio.h>

/**
 * main - a function that prints out the number of CLI arguments
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always Success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
