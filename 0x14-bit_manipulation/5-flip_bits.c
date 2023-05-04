#include "main.h"


/**
 * flip_bits - A functions that counts the number of bits to be flipped
 * @n: The number we are flipping
 * @m: The number we will flip n into
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int eor = n ^ m;
	unsigned int num = 0;

	while (eor != 0)
	{
		num += (eor & 1);
		eor >>= 1;
	}
	return (num);
}
