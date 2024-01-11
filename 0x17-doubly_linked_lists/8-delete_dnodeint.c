#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of doubly linked list
 * @index: index of new node
 * @head: head of the list
 * Return: 1 on success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ha;
	dlistint_t *hb;
	unsigned int k;

	ha = *head;

	if (ha != NULL)
		while (ha->prev != NULL)
			ha = ha->prev;

	k = 0;

	while (ha != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = ha->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hb->next = ha->next;

				if (ha->next != NULL)
					ha->next->prev = hb;
			}
			free(ha);
			return (1);
		}
		hb = ha;
		ha = ha->next;
		k++;
	}
	return (-1);
}
