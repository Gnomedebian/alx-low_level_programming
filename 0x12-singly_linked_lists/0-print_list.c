#include "lists.h"

/**
 * print_list - print linked list.
 * @r: pointer to linked list.
 * Return: node's number
 */
size_t print_list(const list_t *r)
{
	int count = 0;
	const list_t *ptr = r;

	if (ptr == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
