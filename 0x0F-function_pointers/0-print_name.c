#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @jina: string to add
 * @a: pointer to function
 * Return: nothing
 **/
void print_name(char *jina, void (*a)(char *))
{
	if (jina == NULL || a == NULL)
		return;

	a(jina);
}
