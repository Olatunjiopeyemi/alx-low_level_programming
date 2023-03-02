#include "main.h"

/**
 * *_strncat - body
 * @dest: argument
 * @src: argument
 * @n: argument
 * a function that concatenates two strings.
 * Return:  a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
		x++;
	y = 0;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
