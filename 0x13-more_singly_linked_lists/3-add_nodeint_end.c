#include "lists.h"

/**
 * add_nodeint_end - add node at list bottom
 * @head: pointer to list
 * @n: DATA
 * Return: new NULL element adress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	}
	else
	{
	listint_t *ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	}
	return (*head);
}
