#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * print_to_98 - body
 *
 * @n: argument
 *  a function that prints all natural numbers from
 *  Return: 0
 */
void print_to_98(int n)
{
	n = '0';

	while (n <= '98')
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	n++;
	return (n);
}
