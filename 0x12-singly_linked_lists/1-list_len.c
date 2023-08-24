#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Length of Linked List
 *
 * @head: head of Linked List
 *
 * Return: unsigned int, Length
 */

size_t list_len(const list_t *head)
{
	unsigned int len;

	len = 0;

	while (head)
	{
		head = head->next;
		len++;
	}

	return (len);
}
