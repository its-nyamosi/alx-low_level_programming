#include "main.h"
#include <stdlib.h>
/**
 * read_text_file- Read text file to STDIN.
 * @fname: text file being read
 * @_letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_text_file(const char *fname, size_t _letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(fname, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * _letters);
	t = read(fd, buf, _letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
