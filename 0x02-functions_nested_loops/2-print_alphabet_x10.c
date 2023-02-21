#include<stdio.h>
#include "main.h"

/**
 * main - Entry
 *
 *  a function that prints 10 times the alphabet, in lowercase
 *
 *  Return: 0
 */

void print_alphabet_x10(void);

int main(void)
{
	char alpha = 'a';
	char beta;

	while (alpha == 'a')
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
	return (0);
}
