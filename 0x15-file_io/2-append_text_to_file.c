#include "main.h"

/**
 * append_text_to_file - creates a new file
 * @filename: the name of the new file
 * @text_content: the content of the file
 *
 * Return: Always Success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
		return (-1);

	fptr = fopen(filename, "a");
	fputs(text_content, fptr);
	fclose(fptr);
	return (1);
}
