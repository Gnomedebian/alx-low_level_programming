#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: A pointer to name of file.
 * @letters: The number of letters it should read and print.
 *
 * Return: if filename is NULL, if the file can not be opened or read
 *         if write fails or does not write the expected amount of bytes 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, d, t;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	d = read(p, buffer, letters);
	t = write(STDOUT_FILENO, buffer, d);

	if (p == -1 || d == -1 || t == -1 || t != d)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(p);

	return (t);
}
