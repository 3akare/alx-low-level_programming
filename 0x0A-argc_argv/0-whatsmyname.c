#include <stdio.h>

/**
 * main - a function that prints out its filename
 *
 * @argc: command line arguments count
 * @argv: an array of command line vectors
 *
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	(void)(argc);
	printf("%s \n", argv[0]);
	return (0);
}
