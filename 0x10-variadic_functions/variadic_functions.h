#ifndef VARIADIC
#define VARIADIC
#include <stdarg.h>
/**
 * struct print_form - Define a struct to figure out how to print
 * @h: Character check for
 * @j: Pointer function to call
 */
typedef struct print_form
{
	char *h;
	void (*j)();
} prnt_t;

int sum_them_all(const unsigned int a, ...);
void print_numbers(const char *separator, const unsigned int a, ...);
void print_strings(const char *separator, const unsigned int a, ...);
void print_all(const char * const format, ...);

#endif
