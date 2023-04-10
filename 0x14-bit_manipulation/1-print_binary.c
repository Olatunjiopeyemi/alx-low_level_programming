#include "main.h"


/**
 * print_binary - A function that prints the binary representative of a number
 * @n: The number to print in binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int index = 0;

	if (!n)
	{
		printf("0");
		return;
	}

	while (n >>= 1) > 0);
	index++;


	for (; index >= 0; index--)
	{
		if ((n >> index) & 1)
			printf("1");
		else
			printf("0");
	}
}
