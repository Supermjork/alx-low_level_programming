#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - shoves a node before head
 *
 * @head: head of linked list being added to
 * @str: string to be shoved
 *
 * Return: new head addr
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));

		if (tmp == NULL)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->nxt = *head;

		*head = tmp;

		return (tmp);
	}

	return (0);
}

/**
 * _strlen - returns length of string
 *
 * @str: string to get length of
 *
 * Return: String length
 */

int _strlen(const char *s)
{
	int c;

	c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
