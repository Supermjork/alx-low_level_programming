#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - dupes a string returns pointer to new place
 *
 * @str: passed string
 *
 * Return: pointer to new location
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int idx;

	if (str == NULL)
		return (NULL);

	newstr = (char *)malloc(_strlen(str) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (idx = 0; *(str + idx) != '\0'; idx++)
	{
		*(newstr + idx) = *(str + idx);
	}
	*(newstr + idx) = *(str + idx);

	return (newstr);
}

/**
 * _strlen - returns length of string
 * 
 * @str: passed string
 *
 * Return: length
 */

int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	return (i + 1);
}
