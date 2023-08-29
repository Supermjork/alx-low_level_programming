#include "lists.h"

/**
 * insert_nodeint_at_index - shoves a new node at given index
 *
 * @head: Head of list
 * @indx: Index to place at
 * @n: Value to put in new node
 *
 * Return: Reference to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
	listint_t *new_node, *iter;
	unsigned int count = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		if (indx > 0)
		{
			iter = *head;
			while (iter)
			{
				if (count == indx)
				{
					new_node->next = iter->next;
					iter->next = new_node;
					return (new_node);
				}
				iter = iter->next;
				count++;
			}
			if (indx > count)
				return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
