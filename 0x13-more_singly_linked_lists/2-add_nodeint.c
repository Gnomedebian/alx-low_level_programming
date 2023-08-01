#include "lists.h"

/**
 * add_nodeint - add node at the top of list
 * @head: pointer to list
 * @n: DATA
 * Return: new NULL element adress
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	(*head) = ptr;
	return (*head);
}
