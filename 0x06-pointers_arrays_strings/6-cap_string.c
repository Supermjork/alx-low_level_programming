#include "main.h"
#include<stddef.h>
#include<stdio.h>

/**
 * upper - capitalises a letter
 *
 * @c: character pointer
 *
 * Return: pointer to capitalised word
 */

char *upper(char *c)
{
	if (*(c + 0) > 96 && *(c + 0) < 123)
		*(c + 0) -= 32;
	return (c);
}

/**
 * new_word - regex majik
 *
 * @c: character checked
 *
 * Return: 1 for separator, 0 if not
 */

int new_word(char c)
{
	int ptr = 0;
	char *word = " \t\n,;.!?\"(){}";

	while (*(word + ptr) != '\0')
	{
		if (c == *(word + ptr))
			return (1);
		ptr++;
	}
	return (0);
}

/**
 * cap_string - capitalise every word
 *
 * @str: string passed
 *
 * Return: pointer
 */

char *cap_string(char *str)
{
	int ptr;

	if (str == NULL)
		return (NULL);
	upper(str);
	if (*(str + 0) == '\0')
		return (str);

	for (ptr = 1; *(str + ptr) != '\0'; ptr++)
	{
		if (new_word(*(str + ptr - 1) == 1))
		{
			upper(&str[ptr]);
		}
	}
	return (str);
}
