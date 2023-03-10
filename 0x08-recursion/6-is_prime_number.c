#include "main.h"

/**
 * c_is_prime - body
 * prints prime numbers
 * @n: number to check if prime
 * @i: iterator
 * Return: 1 if prime and 0 if not prime
 */

int c_is_prime(int n, int i)
{
	if (i < n)
	{
		if ((n % i) == 0)
			return (0);
		else if (n % i != 0)
			return (1);
	}
	return (c_is_prime(n, (i + 1)));
}

/**
 * is_prime_number - body
 * prints prime number
 * @n: number to check if prime
 * Return: 1 if prime and 0 if not prime
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);

	return (c_is_prime(n, 2));
}
