#include<stdio.h>
/**
 * main - entry point
 * print all lowercase letters
 * then uppercases
 * Return: 0
 */

int main(void)
{
	char u = 'a';

	while (u <= 'z')
	{
		putchar(u);
		u++;
	}
	u = 'A';

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');

	return (0);
}
