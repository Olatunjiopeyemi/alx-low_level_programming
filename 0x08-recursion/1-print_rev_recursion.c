#include "main.h"

/**
 * _puts_recursion - body
 * a function that prints a string, followed by a new line
 * @s: string
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
