#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of dlistint_t list
 * @head: head of the list
 * @n: value of element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *k;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	k = *head;

	if (k != NULL)
	{
		while (k->prev != NULL)
			k = k->prev;
	}
	nw->next = k;

	if (k != NULL)
		k->prev = nw;

	*head = nw;
	return (nw);
}
