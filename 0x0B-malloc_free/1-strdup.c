#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: A pointer to a string memory
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	int x, y;
	char *array;

	for (x = 0; str[x] != '\0'; x++)


	array = (char *) malloc((x + 1) * sizeof(char));


	if (str == NULL)
		return (NULL);


	if (array == NULL)
		return (NULL);


	for (y = 0; y < x; y++)
		array[y] = str[y];

	array[x + 1] = '\0';
	return (array);
}
