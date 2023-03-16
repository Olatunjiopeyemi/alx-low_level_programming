#include <stdlib.h>
#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times b is copied
 * Return: pointer to the memory area s
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
