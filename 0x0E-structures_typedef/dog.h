#ifndef DOG
#define DOG

/**
 * struct dog - a structure containing a dog detail
 * @name: the dog's name
 * @age: the dogs age
 * @owner: the name of its owner
 */

struct dog
{
	char *owner, *name;
	float age;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
