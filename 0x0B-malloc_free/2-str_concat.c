#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: string to concatenate with
 * @s2: string to move to s!
 * Return: null on failure
 */


char *str_concat(char *s1, char *s2)
{
	char *arr;
	int x, count, length;

	count = 0;
	length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		length++;

	arr = malloc(length * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (x = 0; s1[x]; x++)
		arr[count++] = s1[x];

	for (x = 0; s2[x]; x++)

		arr[count++] = s2[x];


	return (arr);
}

