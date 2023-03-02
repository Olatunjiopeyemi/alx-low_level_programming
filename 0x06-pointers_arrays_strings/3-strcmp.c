#include "main.h"

/**
 * Return: 0 or *s1 - *s2
 * @s1: argument
 * @s2: argument
 * a function that compares two strings.
 * _strcmp - body
 */ 
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
		
}

