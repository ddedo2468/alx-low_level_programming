#include "lists.h"

/**
  * pop_listint - delete the head node of a linked list
  * @head: dptr to the linked list head
  * Return: data of the deleted head node.
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int hdata;

	if (*head == NULL)
		return (0);

	hdata = (*head)->n;

	tmp = *head;
	(*head) = (*head)->next;
	free(tmp);

	return (hdata);
}
