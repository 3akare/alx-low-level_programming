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
	char buff[MAX_LENGTH];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to");
		exit(97);
	}
	ptr1 = fopen(argv[1], "r");
	if (ptr1 == NULL)
	{
		printf("Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	ptr2 = fopen(argv[1], "w");
	if (ptr2 == NULL)
	{
		printf("Error: Can't write to file %s", argv[2]);
		exit(98);
	}
	else
	{
		while (fgets(buff, MAX_LENGTH, ptr1) != NULL)
		{
			fputs(buff, ptr2);
		}
		input = fclose(ptr1);
		output = fclose(ptr2);
		return (0);
	}
	if (input == EOF)
	{
		printf("Error: Can't close fd %s", argv[1]);
		exit(100);
	}
	else if (output == EOF)
	{
		printf("Error: Can't close fd %s", argv[2]);
		exit(100);
	}
}
