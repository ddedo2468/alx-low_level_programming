#include "lists.h"

/**
 * print_list - print all elements of list_t list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current;

	size_t c;

	c = 0;
	current = h;

	if (!h->str)
	{
		printf("[0] (nill)\n");
	}
	else
	{
		while (current != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);

			current = current->next;
			c++;
		}
	}

	return (c);
}
