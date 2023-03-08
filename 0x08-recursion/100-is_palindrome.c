#include "main.h"

/**
 * _strlen - body
 * Returns the length of a string
 * @s: string to calculate the length
 * Return: length of s
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * pali - body
 * Checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of s
 * Return: 1 if palindrome or 0 if not
 */

int pali(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (pali(s, i + 1, len - 1));
}

/**
 * is_palindrome - Body
 * Checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pali(s, 0, _strlen(s)));
}
