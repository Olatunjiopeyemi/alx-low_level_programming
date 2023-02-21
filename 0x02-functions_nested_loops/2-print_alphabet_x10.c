#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - body
 *
 *  a function that prints 10 times the alphabet, in lowercase
 *
 */


void print_alphabet_x10(void)
{
	char alpha = '0';
	char beta;

	while (alpha <= '9')
	{
		beta = 'a';
		while (beta <= 'z')
		{
			putchar(beta);
			beta++;
		}
		putchar('\n');
		alpha++;
	}
}
