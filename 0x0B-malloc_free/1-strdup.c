#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *ccc;
int a, b = 0;

if (str == NULL)
return (NULL);

a = 0;
while (str[a] != '\0')
a++;

ccc = malloc(sizeof(char) * (a + 1));

if (ccc == NULL)
return (NULL);

for (b = 0; str[b]; b++)
ccc[b] = str[b];

return (ccc);
}
