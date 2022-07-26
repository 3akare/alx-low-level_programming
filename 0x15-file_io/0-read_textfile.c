#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX
 * standard output
 *
 * @filename: the file to be copied
 * @letters: the length of characters to be printed out
 *
 * Return: The actual number of letters it could
 * read and print, or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[letters];
	int r = -1;
	int in = open(filename, O_RDONLY);
	if (in < 0)
		return (0);
	while (1)
	{
		r = read(in, buf, sizeof(buf));
		if(r == -1 || r == 0)
		{
			break;
		}
		r = write(1, buf, r);
		if (r == -1 || r == 0)
		{
			break;
		}
	}
	return (letters);
}
