#include "main.h"

/**
 * _strlen - identify string length
 * @str: pointer that points to string
 *
 * Return: string length
 */
size_t _strlen(char *str)
{
	size_t k;

	for (k = 0; str[k]; k++)
		;
	return (k);
}

/**
 * append_text_to_file - func appends text at the end of a file.
 * @filename: it's file name ofcourse.
 * @text_content: is NULL terminated string to add at end of file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
		len = write(f, text_content, _strlen(text_content));
	close(f);
	if (len == -1)
		return (-1);
	return (1);
}
