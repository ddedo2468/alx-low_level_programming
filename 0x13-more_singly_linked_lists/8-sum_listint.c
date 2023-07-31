#include "lists.h"

/**
 * sum_listint - sum all the numbers in a linked list
 * @head: pointer to head
 * Return: sum of all.
 */
int sum_listint(listint_t *head)
{
	int total;
	listint_t *current;

	for (total = 0, current = head; current != NULL; current = current->next)
		total += current->n;

	return (total);
}
