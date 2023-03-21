#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes avcariable of type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the name of the dog's owner
 * @dogg: a pointer to the struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dogg != NULL)
	{
		dogg->name = name;
		dogg->age = age;
		dogg->owner = owner;
	}
}
