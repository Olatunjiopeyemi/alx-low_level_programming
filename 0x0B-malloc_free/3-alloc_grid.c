#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid -  a function that returns a pointer to
 * a * 2 dimensional array of integers
 * @width: the roll of the array
 * @height: the column of the array
 * Return: null on failure
 */

int **alloc_grid(int width, int height)
{
	int x, y, **array;


	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		array[y] = malloc(width * sizeof(int));
		if (array[y] == NULL)
		{
			for (y = 0; y < height; y++)
			{
				free(array[y]);
			}
			free(array);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
		{
			arrayt[y][x] = 0;
		}
	return (array);
}

