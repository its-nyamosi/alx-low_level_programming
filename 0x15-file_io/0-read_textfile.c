#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @name: text file being read
 * @let: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *name, size_t let)
{
	char *b;
	ssize_t f;
	ssize_t a;
	ssize_t x;

	f = open(name, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * let);
	x = read(f, b, let);
	a = write(STDOUT_FILENO, b, x);

	free(b);
	close(f);
	return (a);
}
