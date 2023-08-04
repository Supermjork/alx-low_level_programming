#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - adds za numbas pased
 *
 * @argc: number of arguments
 * @argv: passed arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (numchecker(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * numchecker - big pog thing to check for numbas in argument
 *
 * @str: passed string
 *
 * Return: 1 if number, 0 otherwise
 */

int numchecker(char *str)
{
	int i;

	for (i = 0; *(str + i) != 10; i++)
	{
		if (*(str + i) < 48 || *(str + i) > 57)
			return (0);
	}

	return (1);
}
