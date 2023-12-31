#include "lists.h"
/**
 *free_list - free memory of all the nodes
 *@head: head of list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}

