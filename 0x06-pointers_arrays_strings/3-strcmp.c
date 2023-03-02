#include "main.h"

/**
 * Return: 0
 * @s1: argument
 * @s2: argument
 * a function that compares two strings.
 *_strcmp - body
 */ 
int _strcmp(char *s1, char *s2)
{	
	int x = 0;

	while (*s1[x] == *s2[x])
	{
		if (*s1[x] == '\0')
		{
			return (0);
		}
		x++;
	}
		return (*s1 - *s2);
		
}

