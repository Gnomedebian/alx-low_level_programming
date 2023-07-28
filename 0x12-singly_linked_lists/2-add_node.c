#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node at the beginning
 * @head: pointer the start of linked list
 * @str: string data type
 * Return: new element adress, || NULL when it's failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t size = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->next = *head;
	ptr->str = strdup(str);
	if (ptr->str)
		while (ptr->str[size])
			++size;
	ptr->len = size;
	*head = ptr;
	return (ptr);
}
