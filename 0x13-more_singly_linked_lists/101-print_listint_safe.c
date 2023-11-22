#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts number of unique nodes
 * in looped listint_t linked list.
 * @head: pointer to head of the listint_t to check
 *
 * Return: if the list is not looped - 0.
 * else - number of unique nodes in list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *doja, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	doja = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (doja == cat)
		{
			doja = head;
			while (doja != cat)
			{
				nodes++;
				doja = doja->next;
				cat = cat->next;
			}

			doja = doja->next;
			while (doja != cat)
			{
				nodes++;
				doja = doja->next;
			}

			return (nodes);
		}

		doja = doja->next;
		cat = (cat->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints listint_t list safely
 * @head: pinter to head of listint_t list
 *
 * Return:numbr of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p} %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
