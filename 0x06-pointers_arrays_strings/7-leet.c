#include "main.h"

/**
 * leet - body
 * a function that encodes a string into 1337
 * @s: string argument
 * Return: a string;
 */
char *leet(char *s)
{
	int x, y;

	char *bag1;
	char *bag2;
	bag1 = "aAeEoOtTlL"
	bag2 = "4433007711"

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (s[x] == bag1[y])
			{
				s[x] = bag2[y];
			}
		}
	}

	return (s);
}
