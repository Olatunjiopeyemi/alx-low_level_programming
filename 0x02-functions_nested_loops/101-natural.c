#include<stdio.h>

/**
 * main - body
 *  Nature made the natural numbers;
 *  Return: 0
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	b <= a;
	}
	a++;
	}
	printf("%d\n", b);
	return (0);
}
