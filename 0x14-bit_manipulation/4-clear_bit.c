#include "main.h"

/**
 * clear_bit - A function that sets the value of bit to 0
 * @n: A pointer to the number
 * @index: index of the bit to clear
 * Return: -1 or 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = ~(1UL << index);

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n &= x;
	}
	return (1);
}
