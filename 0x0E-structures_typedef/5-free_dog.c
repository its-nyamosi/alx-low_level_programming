#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @a: struct dog to free
 */
void free_dog(dog_t *a)
{
	if (a)
	{
		free(a->name);
		free(a->owner);
		free(a);
	}
}

