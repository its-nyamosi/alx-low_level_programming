#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @kubali: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *kubali)
{
		int a;

		while (*s)
		{
			for (a = 0; kubali[a]; a++)
			{
			if (*s == kubali[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
