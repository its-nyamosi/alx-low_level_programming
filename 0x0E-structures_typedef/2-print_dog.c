#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @a: struct dog to print
 */
void print_dog(struct dog *a)
{
	if (a == NULL)
		return;

	if (a->name == NULL)
		a->name = "(nil)";
	if (a->owner == NULL)
		a->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", a->name, a->age, a->owner);
}
