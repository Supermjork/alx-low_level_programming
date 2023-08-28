#include "lists.h"

/**
 * free_listint2 - chop off head (set to NULL)
 *
 * @head: head
 *
 * Return: Naught
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			(*head) = (*head)->next;

			free(tmp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
