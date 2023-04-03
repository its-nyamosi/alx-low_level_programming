#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @k: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int k)
{
	int a = 0;

	for (; k > 0; a++)
	{
		s[a] = b;
		k--;
	}
	return (s);
}
