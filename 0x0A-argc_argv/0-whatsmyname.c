#include "main.h"
#include <stdio.h>

/**
 * main - body
 * a program that prints its name, followed by a new line
 * @argc: number of arguments entered at execution time
 * @argv: the arrays containing the address of arguments
 * Return: 0
 */ 
int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv);
	return(0);
}
