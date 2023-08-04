#include "main.h"
/**
 * get_endianness - function checks endianness
 * Return: binary
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *p;

	p = (char *)&i;
	if (*p)
		return (i);
	else
		return (0);
}

