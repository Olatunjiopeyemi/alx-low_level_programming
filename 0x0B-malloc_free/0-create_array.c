#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -  a function that creates an array of chars
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: The character contained in the array
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);


	array = malloc(x * sizeof(char));
	for (x = 0; x < size; x++)
	{
		array[x] = c;
	return (array);
	}
	if (array == 0)
		return (NULL);
}
