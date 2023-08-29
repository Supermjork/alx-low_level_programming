#include "lists.h"

/**
 * delete_nodeint_at_index - deleted a node at a given index
 *
 * @head: head of list
 * @indx: indx
 *
 * Return: death
 */

int delete_nodeint_at_index(listint_t **head, unsigned int indx)
{
	unsigned int count = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (indx == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == indx)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		count++;
	}

	return (-1);
}
