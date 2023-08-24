#include "lists.h"

/**
 * free_list - Free LL from memory
 *
 * @head: pointer to first node, Head
 *
 * Return: Naught
 */

void free_list (list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;

		free(tmp->str);
		free(tmp);
	}

	free(head);
}
