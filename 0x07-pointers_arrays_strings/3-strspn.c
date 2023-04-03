#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @kubali: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *kubali)
{
	unsigned int a = 0;
	int c;

	while (*s)
	{
		for (c = 0; kubali[c]; c++)
		{
			if (*s == kubali[c])
			{
				a++;
				break;
			}
			else if (kubali[c + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
