#include <stdio.h>
#include "opeyemi.h"

/**
 * rev_string - body
 * @s: argument
 * a function that reverses a string.
 */

void rev_string(char *s)
{
	char a;
	int x, y, z;

	y = 0;
	z = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	z = y - 1;

	for (x = 0; x < y / 2; x++)
	{
		a = s[x];
		s[x] = s[z];
		s[z--] = a;
	}
}
