#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type struct dog
 * dog - a variable of type struct
 * @name: name to be decided
 * @age: dogs age to be decided
 * @owner: dogs owner to be decided
 * @dogg: pointer to the struct dog
 */

void init_dog(struct dog *dogg, char *name,float age, char *owner)
{
	if (dogg != NULL)
	{
		dogg->name = name;
		dogg->age = age;
		dogg->owner = owner;
	}
}
