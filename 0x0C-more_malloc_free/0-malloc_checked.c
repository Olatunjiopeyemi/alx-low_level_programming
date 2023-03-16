#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: the integer whose address is stored.
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);


	if (new == NULL)
		exit(98);


	return (new);
}
