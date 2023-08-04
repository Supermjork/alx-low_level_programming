#include "main.h"
#include<stdio.h>

/**
 * main - prints argooments
 *
 * @argc: number of args
 * @argv: passed args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
