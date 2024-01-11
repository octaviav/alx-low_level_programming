#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of doubly linked list
 * @head: head of the list
 * @n: value of element
 * Return: the address of a new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	k = *head;
	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = nw;
	}
	else
	{
		*head = nw;
	}
	nw->prev = k;
	return (nw);
}
