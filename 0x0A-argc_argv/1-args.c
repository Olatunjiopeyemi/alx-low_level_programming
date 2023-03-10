#include "main.h"
#include <stdlib.h>

/**
 * main - body
 * a program that prints the number of arguments passed into it
 * @argc: the number of argument passed
 * @argv: the array taht stores the address of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
