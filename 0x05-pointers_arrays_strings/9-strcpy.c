#include "opeyemi.h"

/**
 * _strcpy - body
 * a function that copies the string pointed to by scr to that of dest
 * @dest: argument where we copy our string
 * @src: string argument
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
