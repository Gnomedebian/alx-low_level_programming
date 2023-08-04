#include "main.h"

/**
*flip_bits - return # of bits
*@n: Fliped #
*@m: #
*Return: # of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	n = n ^ m;
	while (n)
	{
		n &= (n - 1);
		++c;
	}
	return (c);
}

