#include "lists.h"

/**
 * get_nodeint_at_index - return value of node at given index
 *
 * @head: head of linked list
 * @indx: index wanted
 *
 * Return: Address of Node at nth index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int indx)
{
	unsigned int count;

	count = 0;

	if (head)
	{
		while (head)
		{
			if (count == indx)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
