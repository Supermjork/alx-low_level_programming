#include "main.h"

/**
 * _strchr - finds and retrieves index of char in str if found
 *
 * @str: string
 * @c: character to find
 *
 * Return: Pointer to where c occurs in str
 */

char *_strchr(char *str, char c)
{
	int idx;

	for (idx = 0; *(str + idx) != '\0'; idx++)
	{
		if (*(str + idx) == c)
			return (idx);
	}

	return (NULL);
}
