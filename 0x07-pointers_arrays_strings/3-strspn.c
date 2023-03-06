#include "main.h"

/**
 * _strspn - body
 * Function that gets the length of a prefix substring
 * @s: string of bytes from accept
 * @accept: strings to match s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, a;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		a = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				a = 1;
			}
		}
		if (a == 0)
			return (z);
	}
	return (0);
}

