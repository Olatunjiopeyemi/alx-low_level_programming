#include "opeyemi.h"

/**
 * _puts - body
 * @str: argument
 * Return: 0
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
