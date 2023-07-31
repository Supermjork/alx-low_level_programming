#include "main.h"

/**
 * compare - comparing 2 strings
 *
 * @str0: comparison string
 * @str1: compared string
 *
 * Return: 1 if match, 0 otherwise
 */

int compare(char *str0, char *str1)
{
	int idx;

	for (idx = 0; *(str1 + idx) != '\0'; idx++)
	{
		if (*(str0 + idx) == '\0')
			return (0);
		if (*(str0 + idx) != *(str1 + idx))
			return (0);
	}
	return (1);
}

/**
 * _strstr - locating substring
 *
 * @haystack: comparing string
 * @needle: substring
 *
 * Return: pointer to first instance of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int idx;

	if (*(needle) == '\0')
		return (haystack);

	for (idx = 0; *(haystack + idx) != '\0'; idx++)
	{
		if (*needle == *(haystack + idx))
		{
			if (compare(&haystack[idx], needle) == 1)
				return (&haystack[idx]);
		}
	}
	return (NULL);
}
