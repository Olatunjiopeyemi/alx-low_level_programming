#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
	printf("the number %d is equal to zero\n", n);
}
else if (n < 0)
{
	printf("The number %d is a negative number\n" n);
}
else
{
	printf("This number %d is a positive number\n" n);
}

return (0);
}