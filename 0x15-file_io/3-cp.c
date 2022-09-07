#include "main.h"

/**
 * print_error97 - prints exit code 97
 * @s: error message
 */

void print_error97(char *s)
{
	dprintf(STDERR_FILENO, "%s", s);
	exit(EXIT97);
}

/**
 * print_error98 - prints exit code 98
 * @s: error message
 * @s2: error message
 */
void print_error98(char *s, char *s2)
{
	dprintf(STDERR_FILENO, "%s %s\n", s, s2);
	exit(EXIT98);
}

/**
 * print_error100 - prints exit code 100
 * @s: error message
 * @num: error message
 */
void print_error100(char *s, int num)
{
	dprintf(STDERR_FILENO, "%s %d\n", s, num);
	exit(EXIT100);
}
/**
 * main - copy from a file to another
 * @ac: argument count
 * @argv: argument vectors
 *
 * Return: Always successful
 */

int main(int ac, char *argv[])
{
	int file1, file2, w, r, cfile1, cfile2;
	char *buffer;

	if (ac != 3)
		print_error97("Usage: cp file_from file_to\n");
	buffer = malloc(sizeof(char) * BUF_SIZE);
	file1 = open(argv[1], O_RDONLY);
	r = read(file1, buffer, 1024);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		if (r == -1 || file1 == -1)
			print_error98("Error: Can't read from file", argv[1]);
		w = write(file2, buffer, r);
		if (file2 == -1 || w == -1)
			print_error98("Error: Can't read from file", argv[2]);
		r = read(file1, buffer, 1024);
		file2 = open(argv[2], O_WRONLY | O_APPEND);
	}

	cfile1 = close(file1);
	cfile2 = close(file2);
	if (cfile1 == -1)
		print_error100("Error: Can't close fd",	cfile1);
	if (cfile2 == -1)
		print_error100("Error: Can't close fd",	cfile1);
	free(buffer);
	return (SUCCESS);
}

