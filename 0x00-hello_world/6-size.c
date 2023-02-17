#include <stdio.h>
/**
 * main - A program that prints ths size of various types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of char is:%lu.\n", (unsigned long)sizeof(a));
printf("the size of int is:%lu.\n", (unsigned long)sizeof(b));
printf("the size of long int is:%lu.\n", (unsigned long)sizeof(c));
printf("the size of long long int is:%lu.\n", (unsigned long)sizeof(d));
printf("the size of float is:%lu.\n", (unsigned long)sizeof(f));
return (0);
}
