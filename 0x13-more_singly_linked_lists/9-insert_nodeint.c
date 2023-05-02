#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idy: index where the new node is added
 * @i: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idy, int i)
{
	unsigned int a;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->i = i;
	new->next = NULL;

	if (idy == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; temp && a < idy; a++)
	{
		if (a == idy - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
