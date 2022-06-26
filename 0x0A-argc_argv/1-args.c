#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed into it
 *
 * @argc: count of command line arguments
 * @argv: an array of command line vector
 *
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d", argc - 1);
}
