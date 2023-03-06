#include "main.h"

/**
 * _strchr - body
 *  a function that locates a character in a string
 *  @s: a string
 *  @c: a character argument
 *  Return:  a pointer to the first occurrence of the character
 *  c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	x = *s++;

	if (x == c)
		return (s - 1);

	if (x == 0)
		return (NULL);
}
