#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head - Start of Linked List
 *
 * Return: Pointer to new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
