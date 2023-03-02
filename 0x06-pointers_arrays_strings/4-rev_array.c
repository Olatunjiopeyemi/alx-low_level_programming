#include "main.h"

/**
 * reverse_array - body
 * a function that reverses the content of an array of integers
 * @a: an array of element argument
 * @n: the number of elements to swap argument
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int bag;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		bag = a[x];
		a[x] = a[y];
		a[y--] = bag;
	}
}

