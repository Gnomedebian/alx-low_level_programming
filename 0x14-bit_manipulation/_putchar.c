#include <unistd.h>

/**
 * _putchar - Writes character c to  stdout
 * @c: Character printed
 *
 * Return: 1 when it's succed
 * On error, -1 is returned, and err.. is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
