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
	int x;


	if (argc == 1)
		printf("%d\n", argc - 1);

	else
	{

		for (x = 0; *argv; x++, argv++)
			;

		printf("%d\n", x - 1);
	}
	return (0);
}
