#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for my program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 * Return: 0 if successful and 1 if not
 */
int main(int argc, char *argv[])
{       
        int i, j;
        int result;

	if(argc > 1)
	{
        	for (i = 1; i < argc; i++ && j = 1; j < argc; j++)
        	{
			result = atoi(argv[i]) * atoi(argv[j);
		}
		printf("%d\n", result);
	}
	return (0);

	else 
		printf("Error");
	return (1);
}
