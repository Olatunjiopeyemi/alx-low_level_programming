#include "main.h"

/**
 * _strchr _ body
 *  a function that locates a character in a string
 *  @s: a string
 *  @c: a character argument
 *  Return: s - 1 or null
 */

char *_strchr(char *s, char c)
{
	char x;

	x = "*s";

	if (x == c)
	{
		return(s - 1);
		x++;

	}
	if (x == 0)
	{
		return (NULL);
		x++;
	}
}
