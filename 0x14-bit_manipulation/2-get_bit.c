#include "main.h"

/**
 * get_bit - A function that gets the value of a bit at a given index.
 * @n: The bit to get its value
 * @index: The index to get the value at.
 * Return: The value of bit or -1 if unsuccessful.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
