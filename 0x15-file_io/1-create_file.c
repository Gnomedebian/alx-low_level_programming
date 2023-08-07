#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @text_content: is the NULL terminated string to write to the file.
 * @filename: is a name of the file to create .
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int p, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(p, text_content, len);

	if (p == -1 || t == -1)
		return (-1);

	close(p);

	return (1);
}
