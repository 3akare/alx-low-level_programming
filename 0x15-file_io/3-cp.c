#include "main.h"

/**
 * exit_code97 - prints exit code 97
 */

void exit_code97(void)
{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit(EXIT97);
}

/**
 * exit_code98 - prints exit code 98
 * @s: string
 */
void exit_code98(char *s)
{
	dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", s);
	exit(EXIT98);
}
/**
 * exit_code99 - prints exit code 99
 * @s: string
 */
void exit_code99(char *s)
{
	fprintf(stderr, "Error: Can't write to %s\n", s);
	exit(EXIT99);
}
/**
 * close_file - close files
 * @open_f: file descdiptor
 */

void close_file(int open_f)
{
	int fd;

	fd = close(open_f);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", open_f);
		exit(EXIT100);
	}
}

/**
 * main - copy from a file to another
 * @ac: argument count
 * @argv: argument vectors
 *
 * Return: always succesful
 */

int main(int ac, char *argv[])
{
	int open1, open2, rd, wrt;
	char *buffer = NULL;

	if (ac != 3)
		exit_code97();
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (buffer == NULL)
		exit(0);

	open1 = open(argv[1], O_RDONLY);
	rd = read(open1, buffer, BUF_SIZE);

	if (open1 == -1 || rd == -1)
		exit_code98(argv[1]);

	open2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (open1 == -1 || rd == -1)
			exit_code98(argv[1]);
		wrt = write(open2, buffer, rd);
		if (open2 == -1 || wrt == -1)
			exit_code99(argv[2]);
		rd = read(open1, buffer, BUF_SIZE);
		open2 = open(argv[2], O_WRONLY | O_APPEND);
	}
	close_file(open1);
	close_file(open2);

	free(buffer);
	return (0);
}


