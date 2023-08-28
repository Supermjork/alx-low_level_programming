#include "lists.h"

/**
 * add_nodeint - Add new head to list
 *
 * @head: Head of Linked List
 * @numb: Value to be added
 *
 * Return: Address of new head of List
 */

listint_t *add_nodeint(listint_t **head, const int numb)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = numb;
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}

	return (NULL);
}
