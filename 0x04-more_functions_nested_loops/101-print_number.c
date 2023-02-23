#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int ope;

	if (n < 0)
	{
		ope = -n;
		_putchar('-');
	}
	else
	{
		ope = n;
	}

	if (ope / 10)
	{
		print_number(ope / 10);
	}

	_putchar((ope % 10) + '0');
}

