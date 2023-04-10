#include "main.h"

/**
 * read_textfile - A  function that reads a text file and prints it to the POSIX standard output.
 * @filename: The file name
 * @letters: Its is the number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (buffer ==  NULL)
		return (0);

	o = open(filename, 0_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return(0);
	}

	free(buffer);
	close(o);

	return(w);
}


