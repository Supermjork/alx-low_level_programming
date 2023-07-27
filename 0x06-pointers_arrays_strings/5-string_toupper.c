#include "main.h"

/**
 * string_toupper - switches all lowercases to upper
 *
 * @str: input string
 *
 * Return: pointer to passed
 */

char *string_toupper(char *str)
{
	int ptr;

	for (ptr = 0; *(str + ptr) != '\0'; ptr++)
	{
		if (*(str + ptr) > 96 && *(str + ptr) < 123)
			*(str + ptr) -= 32;
	}

	return (str);
}
