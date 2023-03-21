#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a var of type struct dog
 * @dogg: pointer to struct dog
 * @name: dog name to be initialized
 * @owner: dog's owner to be initialized
 * @age: dog's age tobe initialized
 */

void init_dog(struct dog *dogg, char *name, float age, char *owner)
{
	if (dogg != NULL)
	{
		dogg->name =  name;
		dogg->age = age;
		dogg->owner = owner;
	}
}
