#include <stdio.h>

/**
 * main - the main function
 *
 * @argc: command line arguments count
 * @argv: array of arguments in string format
 *
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
