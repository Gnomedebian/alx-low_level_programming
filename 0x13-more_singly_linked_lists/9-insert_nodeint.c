#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at [?] position
 * @head: pointer to list
 * @idx: [?]
 * @n: DATA
 * Return: New node adress
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	for (i = 0; ptr; ++i)
	{
	if (i == idx - 1)
	{
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	ptr = ptr->next;
	}
	free(new);
	return (NULL);
}
