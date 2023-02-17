#include<stdio.h>
/**
 * main - entry point
 * print all lowercase letters
 * then uppercases
 * Return: 0
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	char u = 'A';

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');

	return (0);
}
