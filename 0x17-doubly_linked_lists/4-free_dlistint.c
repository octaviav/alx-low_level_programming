#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: ptr to head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
