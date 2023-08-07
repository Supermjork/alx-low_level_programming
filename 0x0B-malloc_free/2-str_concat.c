#include "main.h"
#include<stdlib.h>

/**
 * _strlen - returns length of string
 *
 * @str: string passed
 *
 * Return: length
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;

	return (i + 1);
}

/**
 * str_concat - concats 2 passed strings
 *
 * @str0: first string
 * @str1: second string
 *
 * Return: concatinated string
 */

char *str_concat(char *str0, char *str1)
{
	char *concatstr;
	unsigned int len0, len1;

	if (str0 == NULL)
		str0 = "";

	len0 = _strlen(str0);

	if (str1 == NULL)
		str1 = "";

	len1 = _strlen(str1);

	concatstr = (char *) malloc((len0 + len1 - 1) * sizeof(char));

	if (concatstr == NULL)
		return (NULL);

	for (len0 = 0; *(str0 + len0) != '\0'; len0++)
		*(concatstr + len0) = *(str0 + len0);

	for (len1 = 0; *(str1 + len1) != '\0'; len1++)
		*(concatstr + len0 + len1) = *(str1 + len1);

	*(concatstr + len0 + len1) = *(str1 + len1);

	return (concatstr);
}
