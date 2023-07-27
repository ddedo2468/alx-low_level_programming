#include "lists.h"
#include <stdio.h>

/**
 * free_list - free the list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
