#include "main.h"

/**
 * _memset - function fills first c bytes of the memory
 * @t: memory area that points to t
 * @d: constant byte
 * @c: number of bytes
 * Return: pointer to the memory area t
 */
char *_memset(char *t, char d, unsigned int c)
{
	unsigned int k;

	for (k = 0; k < c; k++)
	{
		t[k] = d;
	}
	return (t);
}
