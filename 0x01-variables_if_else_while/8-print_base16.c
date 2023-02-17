#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry
 * printing all numbers in base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
