#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 10;

	while (a < b)
		printf("%d", a++);
		printf("\n");
	return (0);
}
