#include <stdio.h>

/**
 * main - a function that prints out its filename
 *
 * @argc: command line arguements count
 * @argv: an array of command line vectors
 *
 * Return: Always Success
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s \n", argv[0]);
	return (0);
}
