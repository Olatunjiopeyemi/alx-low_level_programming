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
	char arr[20];
	arr = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[x] != '\0')
	{
		while (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
		if (s[x + 1] == arr[20])
		{
			s[x] += 32;
		}
		x++;
	}
	return (s);
}
