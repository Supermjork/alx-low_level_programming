#include "lists.h"

/**
 * pop_listint - pop last element
 *
 * @head: first node of singly linked list
 *
 * Return: Value of last node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	n = 0;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		n = (*head)->n;

		free(*head);

		*head = tmp;
	}

	return (n);
}
