#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @z: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char z)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == z)
			return (&s[x]);
	}
	return (0);
}
