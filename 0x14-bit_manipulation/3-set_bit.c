#include "main.h"

/**
*set_bit - set value of bit to 1 at given []
*@n: #
*@index: []
*Return: 1 when it succed, -1 when it fails
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(*n) * 8) - 1))
		return (-1);
	*n |= 1 << index;
		return (1);
}
