#include "main.h"

/**
 * append_text_to_file - A  function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: Its the termination string to add.
 * Return: -1 if failed or 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1)
		return (-1);

	if (w == -1)
		return (-1);

	close(o);

	return (1);
}
