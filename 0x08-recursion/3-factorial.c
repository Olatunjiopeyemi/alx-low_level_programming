#include "main.h"

/**
 * factorial - body
 * @n: interger
 * Return: -1 or 1 or the factorial n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

