#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: what should be place in the file
 *
 * Return: 1 if success, and -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, w;

	if (!filename)
		return (FAIL);
	if (!text_content)
		text_content = "";
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, strlen(text_content) + 1);
	if (o == -1 || w == -1)
		return (FAIL);
	close(o);
	return (SUCCESS);
}
