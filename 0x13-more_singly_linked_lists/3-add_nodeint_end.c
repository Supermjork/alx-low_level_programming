#include "lists.h"

/**
 * add_nodeint_end - Shove a new node at the end of the list
 *
 * @head: Head of list to be appended to
 * @numb: Number to be assigned in node value
 *
 * Return: Address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int numb)
{
	listint_t *new_node, *tmp;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = numb;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			tmp = *head;

			while (tmp->next)
				tmp = tmp->next;

			tmp->next = new_node;

			return (tmp);
		}
	}

	return (NULL);
}
