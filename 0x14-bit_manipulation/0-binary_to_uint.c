#include "main.h"
/**
*binary_to_uint - converts binary to unsigned integ..
*@b: pointing to str..
*Return: Converted #
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;

	if (!b)
		return (0);
	while (*b)
	{
	if (*b != '0' && *b != '1')
		return (0);
	s = s * 2 + *b - '0';
	++b;
	}
	return (s);
}
