#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @name: A pointer to the name of the file.
 * @txt: The string to add to the end of the file.
 *
 * Return: If the function fails or name is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *name, char *txt)
{
	int o, x, l = 0;

	if (name == NULL)
		return (-1);

	if (txt != NULL)
	{
		for (l = 0; txt[l];)
			l++;
	}

	o = open(name, O_WRONLY | O_APPEND);
	x = write(o, txt, l);

	if (o == -1 || x == -1)
		return (-1);

	close(o);

	return (1);
}
