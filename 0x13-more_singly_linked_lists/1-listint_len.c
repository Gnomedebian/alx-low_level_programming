#include "lists.h"
/**
 * listint_len - \#nodes count
 * @h: linked_list
 * Return: \#nodes
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
