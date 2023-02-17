#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 * program that prints all single digts
 * Return: 0
 */
int main(void)
{
	int x;

	while (x < 10)
	{

	putchar(48 + x);
	x++;
	}
	putchar('\n');
	return (0);
}

