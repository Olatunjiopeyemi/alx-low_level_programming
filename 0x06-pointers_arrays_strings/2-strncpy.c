#include "main.h"

/**
 * *_strncpy - body
 * @dest: argument
 * @src: argument
 * @n: argument
 *  a function that copies a string.
 *  Return: a string
 */ 

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
