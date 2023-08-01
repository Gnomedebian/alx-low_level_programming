#include "lists.h"

/**
 * print_listint - print linked_list
 * @h: linked_list head
 * Return: \#nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int nodes = 0;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
	nodes++;
	printf("%d\n", ptr->n);
	ptr = ptr->next;
	}
	return (nodes);
}
