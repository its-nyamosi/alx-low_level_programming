#include "main.h"
/**
 * create_file - Creates a file.
 * @name: A pointer to the name of the file to create.
 * @txt: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *name, char *txt)
{
	int f, x, l = 0;

	if (name == NULL)
		return (-1);

	if (txt != NULL)
	{
		for (l = 0; txt[l];)
			l++;
	}

	f = open(name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(f, txt, l);

	if (f == -1 || x == -1)
		return (-1);

	close(f);

	return (1);
}
