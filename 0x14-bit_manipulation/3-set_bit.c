#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @x: pointer to the number to change
 * @ind: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *x, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*x = ((1UL << ind) | *x);
	return (1);
}

