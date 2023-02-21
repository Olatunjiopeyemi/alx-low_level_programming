#include "main.h"

/**
 * print_last_digit - body
 *
 *@x: argument
 * a function that prints the last digit
 *
 * Return: last digit
 * last_digit: modulus
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

		if (last_digit < 0)
		{
			last_digit = -(last_digit);
		}
		_putchar('0' + last_digit);
		return (last_digit);
}
