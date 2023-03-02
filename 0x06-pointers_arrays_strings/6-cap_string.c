#include "main.h"

/**
 * *cap_string - body
 * a function that capitalizes all words of a string
 * Return: capital string
 * @s: string pointer variable
 */

char *cap_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			x++;

		if (s[x - 1] == ' ' ||
		    s[x - 1] == '\t' ||
		    s[x - 1] == '\n' ||
		    s[x - 1] == ',' ||
		    s[x - 1] == ';' ||
		    s[x - 1] == '.' ||
		    s[x - 1] == '!' ||
		    s[x - 1] == '?' ||
		    s[x - 1] == '"' ||
		    s[x - 1] == '(' ||
		    s[x - 1] == ')' ||
		    s[x - 1] == '{' ||
		    s[x - 1] == '}' ||
		    x == 0)
			s[x] -= 32;

		x++;
	}
	return (s);
}
