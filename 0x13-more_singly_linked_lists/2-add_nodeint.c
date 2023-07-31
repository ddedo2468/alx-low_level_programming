#include "lists.h"

/**
  * add_nodeint - add new node at the start.
  * @head: dptr to the head of linked list.
  * @n: integer to add.
  * Return: address of the new node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = (listint_t *)malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = (*head);
	(*head) = nnode;

	return (nnode);
}
