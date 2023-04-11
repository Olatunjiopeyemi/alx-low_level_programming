#include "main.h"


/**
 * flip_bits - A functions that counts the number of bits to be flipped
 * @n: The number we are flipping
 * @m: The number we will flip n into
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int EOR = n ^ m;
	unsigned int num = 0;

	while (EOR != 0)
	{
		num = (1 + (EOR & 1));
		EOR >>= 1;
	}
	return (num);
}
