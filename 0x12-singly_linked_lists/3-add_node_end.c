#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - shoves a new tail on this b
 *
 * @head: head of linked list
 * @str: string to be shoved
 *
 * Return: address of linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, tmp;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
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
