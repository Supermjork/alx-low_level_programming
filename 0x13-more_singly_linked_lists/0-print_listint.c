#include "lists.h"
#include <stddef.h>

/**
 * print_listint - Prints elements of a Singly Linked List
 *
 * @head: First element of a linked list (Head)
 *
 * Return: Number of Nodes
 */

size_t print_listint(const listint_t *head)
{
	int count;

	count = 0;

	if (head != NULL)
	{
		while (head)
		{
			printf("%d\n", head->n);
			head = head->next;
			count++;
		}
	}

	return (count);
}
