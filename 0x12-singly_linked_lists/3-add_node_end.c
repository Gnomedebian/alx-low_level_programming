#include "lists.h"
#include <string.h>
/**
 *add_node_end - add node to end
 *@head: pointer points to  pointer
 *@str: string data type
 *Return: new || NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n = 0;
	list_t *last = *head;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->str = strdup(str);
	if (ptr->str)
		while (str[n])
			++n;
	ptr->len = n;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = ptr;
	}
	else
		*head = ptr;
	return (ptr);
}
