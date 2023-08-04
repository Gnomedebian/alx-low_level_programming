#include "main.h"
/**
*print_rec - prints binary representing n
*@n: # printed
*/
void print_rec(unsigned long int n)
{
	if (n == 0)
		return;
	print_rec(n >> 1);
	_putchar((n & 1) + '0');
}
/**
*print_binary - prints binary representing n
*@n: # printed
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_rec(n);
}
