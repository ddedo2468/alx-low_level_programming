#include "lists.h"

/**
 * free_listint2 - linked list free
 * @head: ptr to the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *hld;

	if (head == NULL)
		return;

	while (*head)
	{
		hld = (*head)->next;
		free(*head);
		*head = hld;
	}

	*head = NULL;
}
