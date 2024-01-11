#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at stated position
 * @h: head of node
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node at success,
 * or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw;
	dlistint_t *head;
	unsigned int k;

	nw = NULL;
	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		head = *h;
		k = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (k == idx)
			{
				if (head->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->next = head->next;
						nw->prev = head;
						head->next->prev = nw;
						head->next = nw;
					}
				}
				break;
			}
			head = head->next;
			k++;
		}
	}
	return (nw);
}
