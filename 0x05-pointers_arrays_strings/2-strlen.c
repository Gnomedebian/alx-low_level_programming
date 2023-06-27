#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: The string to find the length of.
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0'
	
	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return lenght;
}
