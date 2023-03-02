#include "main.h"

/**
 * _strcmp - body
 * @s1: argument
 * @s2: argument
 * a function that compares two strings.
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0')
		{
			return (0);
		}
		x++;
	}
	return (*s1 - *s2);

}
