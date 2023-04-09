#include "main.h"

/**
 * append_text_to_file - A  function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: Its the termination string to add.
 * Return: -1 if failed or 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open, write, length;

	if (!filename)
		return (-1);

	if (text_content)
	{
		length = 0;

		while (text_content[length])
			length++;
	}

	open = open(filename, O_WRONLY | O_APPEND);
	write = write(open, text_content, str_len);

	if (open == -1)
		return (-1);
	if (write == -1)
		return (-1);

	close(open);

	return (1);
}
