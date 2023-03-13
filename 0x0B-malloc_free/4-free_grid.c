#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees the 2 dimensional grid 
 * previously created by myt alloc_grid function
 * @grid: our array
 * @height: the numbers column in the array
 */


void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	
	while (x < height)
	{
		free(grid[x]);
	}
	x++;
	free(grid);
}
