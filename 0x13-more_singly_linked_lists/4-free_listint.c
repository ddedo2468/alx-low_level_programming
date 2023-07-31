#include "lists.h"

/**
 * free_listint - free a list.
 * @head: linked list head (start).
 */
void free_listint(listint_t *head)
{
	listint_t *hld;

	while (head != NULL)
	{
		hld = head;
		head = head->next;
		free(hld);
	}
}
