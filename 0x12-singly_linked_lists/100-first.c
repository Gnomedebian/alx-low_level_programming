#include <stdio.h>

void before(void) __attribute__((constructor));
/**
*before - this message will print before main execution.
*/
void before(void)
{
printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}

