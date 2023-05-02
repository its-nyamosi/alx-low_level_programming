#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @x: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **x)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!x || !*x)
		return (0);

	while(*x)
	{
		diff = *x - (*x)->next;
		if (diff > 0)
		{
			temp =(*x)->next;
			free(*x);
			*x = temp;
			len++;
		}
		else
		{
			free(*x);
			*x = NULL;
			len++;
			break;
		}
	}

	*x = NULL;

	return (len);
}

