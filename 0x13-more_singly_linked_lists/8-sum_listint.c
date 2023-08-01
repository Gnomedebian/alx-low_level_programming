#include "lists.h"

/**
 * sum_listint - DATA cumulation
 * @head: pointer to list
 * Return: cumulation
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	if (ptr == NULL)
	return (0);
	while (ptr != NULL)
	{
	sum = sum + ptr->n;
	ptr = ptr->next;
	}
	return (sum);
}
