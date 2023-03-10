#include "main.h"
#include<stdio.h>

/**
 * main - body
 * a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array thats stores the addresses of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%d = %s\n", x, argv[x]);
	}

	return (0);
