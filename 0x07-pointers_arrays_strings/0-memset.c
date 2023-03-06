#include "main.h"

/**
 * _memset - body
 * a function that fills memory with a constant byte
 * @s: pointer variable
 * @b: a constant byte
 * @n: number of byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
