#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @m: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int m)
{
	int j = 0;

	for (; m > 0; j++)
	{
		s[j] = b;
		m--;
	}
	return (s);
}
