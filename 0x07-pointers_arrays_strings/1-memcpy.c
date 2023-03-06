#include "main.h"

/**
 * _memcpy - body
 * a function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of copies
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{
		dest(x) = src(x);
		x++;
	}
	return (dest);
}
