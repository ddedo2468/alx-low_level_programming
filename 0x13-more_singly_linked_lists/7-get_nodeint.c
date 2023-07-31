#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: first node.
 * @index: the node index.
 *
 * Return: pointer to the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *tmp = head;

	while (tmp && c < index)
	{
		tmp = tmp->next;
		c++;
	}

	return (tmp ? tmp : NULL);
}
