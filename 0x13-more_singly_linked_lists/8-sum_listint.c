#include "lists.h"

/**
 * sum_listint - sums all data within linked list
 *
 * @head: Start of linked list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum += head->n;

			head = head->next;
		}

		return (sum);
	}

	return (0);
}
