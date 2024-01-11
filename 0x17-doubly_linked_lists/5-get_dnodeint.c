#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of doubly linked list.
 * @head: ptr to head of list
 * @index: index of node to sear starting from 0
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *k;

	size = 0;
	if (head == NULL)
		return (NULL);

	k = head;
	while (k)
	{
		if (index == size)
			return (k);
		size++;
		k = k->next;
	}
	return (NULL);
}
