#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: argument
 * Return: a straight line
 */


void print_line(int n)
{
	int ope;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ope = 1; ope <= n; ope++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

