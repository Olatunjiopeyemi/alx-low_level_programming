#include "main.h"


/**
 * print_binary - A function that prints the binary representative of a number
 * @n: The number to print in binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{

	if (n >= 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');

	_putchar('\n');
}
