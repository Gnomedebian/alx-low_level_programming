#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - Print any string
 * @args:args
 */
void print_string(va_list args)
{
	char *strng;

	strng = va_arg(args, char *);
	if (strng == NULL)
		strng = "(nil)";
	printf("%s",  strng);
}

/**
 * print_char - Print a character
 * @args: char
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer
 * @args: integer
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float
 * @args: float
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - any given type of argument
 * @format: types of arguments being passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep;
	prnt_t prnt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	int i, y;

	va_start(args, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		y = 0;
		while (y < 4)
		{
			if (*prnt[y].c == format[i])
			{
				printf("%s", sep);
				prnt[y].f(args, sep);
				sep = ", ";
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
