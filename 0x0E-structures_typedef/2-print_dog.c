#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit;
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	if ((*d).age == NULL)
		printf("(nil)\n");
	if ((*d).owner == NULL)
		printf("(nil)");
	else
		printf("age = %f\n", (*d).age);
		printf("owner = %s\n", (*d).owner);
		printf("name = %s\n", (*d).name);
}

