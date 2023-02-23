#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9
 * Except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int ope;

	for (ope = 0; ope <= 9; ope++)
	{
		if (ope != 2 && ope != 4)
		{
			_putchar(ope + '0');
		}
	}
	_putchar('\n');
}
