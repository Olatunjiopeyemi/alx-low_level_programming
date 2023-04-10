#include "main.h"

/**
 *  binary_to_uint - A function that converts binary number to an unsigned int
 *  @b: A pointer to the strings of 0 and 1
 *  Return: 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert, pow;
	int str_len;

	if (b == NULL)
		return (0);

	str_len = 0;

	for (str_len = 0; b[str_len]; str_len++)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);
	}

	for (pow = 1, convert = 0, str_len--; str_len >= 0;
			str_len--, pow *= 2)
	{
		if (b[str_len] == '1')
			convert = (pow + 1);
	}

	return (convert);
}
