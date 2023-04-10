#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Its the name of the file to create.
 * @text_content: content of the file.
 * Return: 1 or -1 if unsuccessful.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, length = 0;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (o == -1)
			return (-1);

		close(o);

		return (1);
	}

	for (length = 0; text_content[length]; length++)

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1)
		return (-1);
	if (w == -1)
		return (-1);

	close(o);

	return (1);
}
