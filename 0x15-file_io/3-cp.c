#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffer(char *filename);
void rank(int file_descriptor);

/**
 * buffer - A function that allocate bytes to the new buffer
 * @filename: The file name
 * Return: A pointer to the new buffer
 */

char *buffer(char *filename)
{
	char *n_buffer;

	n_buffer = malloc(sizeof(char) * 1024);

	if (!n_buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (n_buffer);
}

/**
 * rank - A function that closes a file descriptor
 * @file_descriptor: The file descriptor
 */

void rank(int file_descriptor)
{
	int c;

	c = close(file_descriptor);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, 
				"Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}


/**
 * main - The main program that copies a file from one place to another.
 * @argv: The list of elements
 * @argc: The number of element in the list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file1, file2, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file1 file2\n");
		exit(97);
	}

	b = buffer(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	r = read(file1, b, 1024);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (file1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(file2, b, r);
		if (file2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		r = read(file1, b, 1024);
		file2 = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0)
	
	free(b);
	rank(file1);
	rank(file2);

	return (0);
}

