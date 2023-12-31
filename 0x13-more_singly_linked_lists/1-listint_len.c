#include "lists.h"

/**
 * listint_len - count the nodes in a linked lists
 * @h: linked list to count nodes inside
 * Return: nodes final count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
