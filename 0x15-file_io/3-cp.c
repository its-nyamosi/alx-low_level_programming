#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *alloc_buf(char *fname);
void close_fd(int fd);

/**
 * alloc_buf - Allocates 1024 bytes for a buffer.
 * @fname: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *alloc_buf(char *fname)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fname);
		exit(99);
	}

	return (buf);
}

/**
 * close_fd - Closes file descriptors.
 * @d: The file descriptor to be closed.
 */
void close_fd(int d)
{
	int c;

	c = close(d);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = alloc_buf(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	r = read(from_fd, buf, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_fd == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(to_fd, buf, r);
		if (to_fd == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(from_fd, buf, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_fd(from_fd);
	close_fd(to_fd);

	return (0);
}

