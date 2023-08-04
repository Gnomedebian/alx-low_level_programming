#include "main.h"

/**
*get_bit - value of bit at given []
*@n: # Converted
*@index: []
*Return: Bytes
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(n) * 8) - 1))
		return (-1);
	return ((n >> index) & 1);
}
