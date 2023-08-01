#include "lists.h"

/**
 * get_nodeint_at_index - get [] of n in list
 * @head: pointer to list
 * @index: Index which we need
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i < index; i++)
	{
	if (ptr == NULL)
		return (NULL);
	ptr = ptr->next;
	}
	return (ptr);
}
