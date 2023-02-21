#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - body`
 * A function that prints the alphabet, in lowercase
 *
 *
 */


void print_alphabet(void)
{
	char letters = 'a';
		while (letters <= 'z')
		{
			putchar(letters);
			letters++;
		}
			putchar('\n');


}
