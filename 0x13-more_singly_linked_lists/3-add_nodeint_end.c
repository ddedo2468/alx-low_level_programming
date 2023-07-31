#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node at the end of
  * a linked list
  *
  * @head: dptr to the head of linked list
  * @n: integer to add.
  * Return: address of the new element.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode, *start;

	nnode = (listint_t *)malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
		*head = nnode;
	else
	{
		for (start = *head ; start->next != NULL ; start = start->next)
		{
		}
		start->next = nnode;
	}
	return (nnode);
}
