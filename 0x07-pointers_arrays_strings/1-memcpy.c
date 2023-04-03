#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@m: number of bytes
 *
 * Return: copied memory with m byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int m)
{
	int a = 0;
	int b = m;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		m--;
	}
	return (dest);
}

