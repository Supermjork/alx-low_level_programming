#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * _strlen - length of string
 *
 * @s: string passed
 *
 * Return: length
 */

int _strlen(char *s)
{
	unsigned int i;

	if (s == NULL)
		return (1);

	for (i = 0; *(s + i) != '\0'; i++)
		;

	return (i);
}

/**
 * string_nconcat - concatenate n characters
 *
 * @str0: first string passed
 * @str1: second string passed
 * @n: n bytes
 *
 * Return: ptr to new concatenated string
 */

char *string_nconcat(char *str0, char *str1, unsigned int n)
{
	char *finalstr;
	unsigned int size0, size1, idx0, idx1;

	size0 = _strlen(str0);
	size1 = _strlen(str1);

	if (n > size1)
		n = size1;

	finalstr = (char *)malloc((size0 + n) * sizeof(char));

	if (finalstr == NULL)
		return (NULL);
	if (size0 == 1 && size1 == 1)
		return (NULL);

	for (idx0 = 0; idx0 < size0; idx0++)
		*(finalstr + idx0) = *(str0 + idx0);

	for (idx1 = 0; idx1 < n; idx1++)
	{
		*(finalstr + idx0 + idx1) = *(str1 + idx1);
	}

	*(finalstr + idx0 + idx1) = '\0';

	return (finalstr);
}
