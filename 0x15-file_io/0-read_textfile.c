#include "main.h"

/**
 * read_textfile - read a text fie and prints it to the STDOUT
 * @filename: the file to be printed out
 * @letters: the number of letters that should be printed
 *
 * Return: 0 if fails and number of printed charcters when success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char c;
	long unsigned int i = 0;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);

	c = fgetc(fptr);
	while	(c != EOF && i < letters)
	{
		putchar(c);
		c = fgetc(fptr);
		i++;
	}
	fclose(fptr);
	return (i);
}
