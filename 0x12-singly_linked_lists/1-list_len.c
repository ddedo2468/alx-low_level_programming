#include <stdlib.h>
#include "lists.h"
/**
 * list_len - count the elements in a linked list
 * @h: ptr to list_t list
 * Return: final count
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
