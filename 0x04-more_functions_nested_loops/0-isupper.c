#include "main.h"

/**
 * _isupper - Body
 * @c: argument
 *  a function that checks for uppercase character.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		c++;
		return (1);
	}
	else
	{
		return (0);
	}
}
