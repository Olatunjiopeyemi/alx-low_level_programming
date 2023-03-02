#include "main.h"

/**
 * _strcat - body
 *  a function that concatenates two strings.
 *  @dest: argument
 *  @src: argument
 *  Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y;

		while (*dest[x] != '\0')
		{
			x++;
		}
		int y = 0;

		while (src[y] != '\0')
		{
			dest[x] = *src[y];
			x++;
			y++;
		}
		dest[x] = '\0';
	return (dest);
}
