#include "main.h"

/**
 *  binary_to_uint - A function that converts binary number to an unsigned int
 *  @b: A pointer to the strings of 0 and 1
 *  Return: 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int str_len, deci_num, base;

	if (!b)
		return (0);


	for (str_len = 0; b[str_len]; str_len++)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);
	}
	for (base = 1, deci_num = 0, str_len--; str_len >= 0;
			str_len--, base = base * 2)
	{
		if (b[str_len] == '1')
			deci_num = base + 1;
	}

	return (deci_num);
}
