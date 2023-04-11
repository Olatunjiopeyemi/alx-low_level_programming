#include "main.h"
#include <stdio.h>
/**
 *  binary_to_uint - A function that converts binary number to an unsigned int
 *  @b: A pointer to the strings of 0 and 1
 *  Return: 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			deci = (deci << 1) | (*b - '0');
		}
	}

	if (b == NULL)
		return (0);

	return (deci);
}
