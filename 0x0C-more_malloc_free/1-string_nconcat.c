#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: string to be added to
 * @s2: string to concatenate with s1
 * @n: the type whose address is stored in a pointer
 * Return: To the newly allocated memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int count, length = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (count = 0; s1[count]; (count++))
		length++


	new = malloc(sizeof(char) * (length + 1));


	if (new == NULL)
		return (NULL);

	length = 0;

	for (count = 0; s1[count]; (count++))
		new[length++] = s1[count];

	for (count = 0; s1[count] && count < n; (count++))
		new[length++] = s2[count];

	new[length] = '\0';

	return (new);
}
