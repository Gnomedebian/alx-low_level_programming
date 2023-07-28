#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @r: pointer to linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *r)
{
	int count = 0;
	const list_t *ptr = r;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
