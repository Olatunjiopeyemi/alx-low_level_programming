#include<stdio.h>
/**
 * main - entry point
 * print all lowercase letters
 * then uppercases
 * Return: 0
 */

int main(void)
{
	char lw = 'a';

	while (lw <= 'z')
	{
		putchar(lw);
		lw++;
	}
	char upp = 'A';

	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');

	return (0);
}
