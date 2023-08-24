#include "lists.h"

/**
 * print_list - Prints list
 *
 * @head: head to linked list
 *
 * Return: Number of Nodes
 */

size_t print_list(const list_t *head)
{
	size_t count;

	count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}

		head = head->next;
		count++;
	}

	return (count);
}
