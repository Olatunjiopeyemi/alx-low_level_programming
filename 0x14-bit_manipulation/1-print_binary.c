#include "main.h"


/**
 * print_binary - A function that prints the binary representative of a number
 * @n: The number to print in binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int a = 100;

	if (a >= 0)
		print_binary(a >> 1);

	_putchar((n >> a) & 1 ? '1' : '0');
}
