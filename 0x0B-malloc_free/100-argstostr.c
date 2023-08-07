#include "main.h"
#include<stdlib.h>

/**
 * argstostr - prints arguments
 *
 * @argc: argument counter
 * @argv: array holding arguments
 *
 * Return: pointer to string holding args
 */

char *argstostr(int argc, char **argv)
{
	char *finalstr;
	/*
	 * size: size of final string
	 *  i: indexing (Generally for argc)
	 *  j: indexing (Within argv dims
	 *  k: indexing within final str
	 */
	unsigned int size, i, j, k;

	size = 0;
	k = 0;

	if (argc <= 0 || argv == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int) argc; i++)
	{
		size += _strlen(*(argv + i));
	}

	finalstr = (char *)malloc((size + 1) * sizeof(char));

	if (finalstr == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int) argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			*(finalstr + k) = argv[i][j];
			k++;
		}

		*(finalstr + k) = 10;
		k++;
	}

	*(finalstr + k) = '\0';

	return (finalstr);
}

/**
 * _strlen - returns length of string
 * 
 * @str: string passed
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;

	return (i + 1);
}
