#include<stdio.h>
/**
 *  * main - entry point
 *   * print all lowercase letters
 *   then uppercases
 *    * Return: 0
 *     */

int main(void)
{
	char lw;
	char upp;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	for(upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp)
	}
	putchar('\n');
	return (0);
}
