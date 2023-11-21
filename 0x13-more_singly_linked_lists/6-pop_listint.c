#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - deletes head node
 * @head: pointer to first element in linked list
 * Return: data in elements deleted
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
