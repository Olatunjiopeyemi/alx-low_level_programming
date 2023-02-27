#include "opeyemi.h"

/**
 * puts2 - body
 * a function that reverses a string.
 * @str: argument
 */

void puts2(char *str)
{
	int x, y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}

	_putchar('\n');
}
