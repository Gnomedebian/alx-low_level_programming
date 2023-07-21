#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @a:const
 * Return:sum of parameters
 */
int sum_them_all(const unsigned int a, ...)
{
	unsigned int b;
	va_list args;
	double sum = 0;

	if (a == 0)
	{
		return (0);
	}
	va_start(args, a);
	for (b = 0; b < a; b++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
