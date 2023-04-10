#include "main.h"


/**
 * print_binary - A function that prints the binary representative of a number
 * @n: The number to print in binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int ope = 100;
	for (ope = 63; ope >= 0; ope--)
	{
		_putchar((n >> ope) & 1 ? '1' : '0');
	}


}
