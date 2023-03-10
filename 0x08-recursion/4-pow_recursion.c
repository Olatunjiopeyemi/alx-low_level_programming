#include "main.h"

/**
 * _pow_recursion - body
 *  a function that returns the value of x raised to the power of y
 * @x: integer to be raised
 * @y: power integer
 * Return: -1,1 or value or pow recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
