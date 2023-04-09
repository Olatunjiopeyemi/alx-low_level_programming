#include "main.h"

/**
 * read_textfile - A  function that reads a text file and prints it to the POSIX standard output.
 * @filename: The file name
 * @letters: Its is the number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opening, read, write;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (buffer ==  NULL)
		return (0);

	open = open(filename, 0_RDONLY);
	read = read(open, buffer, letters);
	write = write(STDOUT_FILENO, buffer, read);

	if (open == -1 ||read == -1 || write == -1 || write != read)
	{
		free(buffer);
		return(0);
	}

	free(buffer);
	close(open);

	return(w);
}


