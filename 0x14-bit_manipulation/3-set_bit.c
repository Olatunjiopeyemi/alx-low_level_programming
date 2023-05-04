#include "main.h"

/**
 * set_bit - A function that sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value starting at 0.
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	else
	{
		*n |= (1UL << index);
	}

	return (1);
}
