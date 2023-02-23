#include "main.h"

/**
 * print_most_numbers - body
 */
void print_most_numbers(void)
{
	char ope = '0';

	while (ope <= '9' && ope != '2' && ope != '4')
	{
		_putchar(ope);
		ope++;
	}
}
