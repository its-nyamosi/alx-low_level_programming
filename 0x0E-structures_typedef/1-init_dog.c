#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @a: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *a, char *name, float age, char *owner)
{
	if (a == NULL)
		a = malloc(sizeof(struct dog));
	a->name = name;
	a->age = age;
	a->owner = owner;
}
