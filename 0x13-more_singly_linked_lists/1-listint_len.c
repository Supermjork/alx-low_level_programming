#include "lists.h"

/**
 * listint_len - Length of List
 *
 * @head: Head of Singly Linked List
 *
 * Return: Length of List
 */

size_t listint_len(const listint_t *head)
{
	int count;

	count = 0;

	if (head != NULL)
	{
		while (head)
		{
			head = head->next;
			count++;
		}
	}

	return (count);
}
