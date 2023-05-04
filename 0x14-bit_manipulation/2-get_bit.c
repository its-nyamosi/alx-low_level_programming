#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @num: number to search
 * @x: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int num, unsigned int x)
{
	int bit_val;

	if (x > 63)
		return (-1);

	bit_val = (num >> x) & 1;

	return (bit_val);
}
