#include "lists.h"

/**
 * print_listint_safe - idk man safe ain't my middle name
 *
 * @head: head
 *
 * Return: count
 */

size_t print_listint_safe(const listint_t *head)
{
	int count;

	count = 0;

	if (head != NULL)
	{
		while (head)
		{
			printf("[%p] %d\n", head, head->n);
			head = head->next;
			count++;
		}
		return (count);
	}

	return (98);
}
