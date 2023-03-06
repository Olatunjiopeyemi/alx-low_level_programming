#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - body
 * Function that prints the sum of the two diagonals of a square matrix
 * @a: square matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int x;

	unsigned int add1, add2;

	add1 = 0;
	add2 = 0;

	x = 0;

	if (x < size)
	{
		add1 += a[(size * x) + x];
		add2 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", add1, add2);
	x++;
}
