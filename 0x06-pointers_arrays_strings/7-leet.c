#include "main.h"

/**
 * leet - convert stuff to leet form
 *
 * @c: string
 *
 * Return: string
 */

char *leet(char *c)
{
	int org, rep;
	char *replaced;

	replaced = "aEeEoOtTlL4433007711";

	for (org = 0; c[org] != '\0'; org++)
	{
		for (rep = 0; rep <= 9; rep++)
		{
			if (c[org] == replaced[rep])
				c[org] = replaced[rep + 10];
		}
	}
	return (c);
}
