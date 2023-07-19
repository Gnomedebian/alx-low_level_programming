#include "function_pointers.h"

/**
  * print_nameee - Prints nameee
  * @name: nameee
  * @f: funct pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
