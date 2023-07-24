#include "main.h"

/**
 * _strlen - counts how many characters within a string
 *
 * @str: passed string pointer
 *
 * Return: count
 */

int _strlen(char *str)
{
	int count;

	for (count = 0; *str != '\0'; str++)
		count++;

	return (count);
}
