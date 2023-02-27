#include "opeyemi.h"

/**
 * puts_half - body
 * @str: argument
 *  a function that prints half of a string, followed by a new line
 */

void puts_half(char *str)
{
	int x, y, z;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (z = x / 2; str[z] != '\0'; z++)
		{
			_putchar(str[z]);
		}
	}
	else if (x % 2)
	{
		for (y = (x - 1) / 2; y < x - 1; y++)
		{
			_putchar(str[y + 1]);
		}
	}
	_putchar('\n');
}

