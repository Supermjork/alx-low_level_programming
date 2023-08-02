#include "main.h"

/**
 * _strlen_recursion - length of string
 *
 * @str: string passed
 *
 * Return: length of string
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);

	if (*(str + 1) == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(str + 1) + 1);
	}
}
