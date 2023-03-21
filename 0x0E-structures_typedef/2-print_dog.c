#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
i
/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to the struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
