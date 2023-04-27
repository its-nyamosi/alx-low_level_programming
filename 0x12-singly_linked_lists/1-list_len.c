#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @a: pointer to the list_t list
 *
 * Return: number of elements in a
 */
size_t list_len(const list_t *a)
{
	size_t i = 0;

	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}
