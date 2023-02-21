#include<stdio.h>
#include "main.h"

/**
 * main - Entry
 * A function that prints the alphabet, in lowercase
 *
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
	char letters = 'a';
		while (letters <= 'z')
		{
			putchar(letters);
			letters++;
		}
			putchar('\n');
	return (0);

}
