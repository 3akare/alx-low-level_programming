#include "main.h"

/**
 * main - function copies text from @argv[1] to @argv[2]
 * @argc: CLI agruments count
 * @argv: CLI agruments vector
 *
 * Return: 0 when Successful
 */

int main(int argc, char **argv)
{
	FILE *ptr1, *ptr2;
	int input, output;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr1 = fopen(argv[1], "r");
	if (ptr1 == NULL)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ptr2 = fopen(argv[2], "w");
	if (ptr2 == NULL)
	{
		printf("Error: Can't write to file %s\n", argv[2]);
		exit(98);
	}
	else
	{
		copyText(ptr1, ptr2);
		input = fclose(ptr1);
		output = fclose(ptr2);
		return (0);
	}
	if (input == EOF)
	{
		printf("Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	else if (output == EOF)
	{
		printf("Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
}

/**
 * copyText - a function that copies text from @fin to @fout
 * @fin: the file to be copied from
 * @fout : the file copy to
 */

void copyText(FILE *fin, FILE *fout)
{
	char buff[MAX_LENGTH];

	while (fgets(buff, MAX_LENGTH, fin) != NULL)
	{
		fputs(buff, fout);
	}
}
