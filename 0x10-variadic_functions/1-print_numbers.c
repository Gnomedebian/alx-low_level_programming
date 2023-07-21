#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string
 * @a: number of args
 */
void print_numbers(const char *separator, const unsigned int a, ...)
{
	unsigned int b = 0;
	va_list args;

	va_start(args, a);
	while (b < a)
	{
	int h = va_arg(args, int);

	printf("%d", h);
	if (b < a - 1 && separator != NULL)
		printf("%s", separator);
	b++;
	}
	printf("\n");
	va_end(args);
}
