#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the filename to append
 * @text_content: text to be appended to @filename
 *
 * Return: 1 on success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (FAIL);
	if (text_content)
		len = strlen(text_content);

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (0 == -1 || w == -1)
		return (FAIL);
	close(o);
	return (SUCCESS);
}
