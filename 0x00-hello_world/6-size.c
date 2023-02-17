#include <stdio.h>
/**
 * main - A program that prints ths size of various types
 * Return: 0
 */
int main(void)
{
printf("Size of a char = %2d byte(s) \n", sizeof(char));
printf("Size of a int = %2d byte(s) \n", sizeof(short int));
printf("Size of a long int = %2d byte(s) \n", sizeof(long int));
printf("Size of a long long int = %2d byte(s) \n", sizeof(long long int));
printf("Size of a float = %2d byte(s) \n", sizeof(float));
return (0);
}
