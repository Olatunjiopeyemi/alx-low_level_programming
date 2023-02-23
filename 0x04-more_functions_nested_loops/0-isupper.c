#include "main.h"

/**
 * _isupper - Body
 * @c: argument
 *  a function that checks for uppercase character.
 * Return: 0 if false and 1 if true
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
