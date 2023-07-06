#include "main.h"
/**
 * get_bit - returns the value of a bit at an index
 * @x: number to search
 * @ind: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int x, unsigned int ind)
{
	int bit_val;

	if (ind > 63)
		return (-1);

	bit_val = (x >> ind) & 1;

	return (bit_val);
}

