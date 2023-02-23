nclude "main.h"

/**
 * _isdigit - Body
 * a function that checks for a digit (0 through 9).
 * @c: argument
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c < '10')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

