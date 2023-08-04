#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - pain of multiplication
 *
 * @argc: number of args
 * @argv: args
 *
 * Return: 1 on error, 0 success
 */

int main(int argc, char *argv[])
{
	int num0, num1;
	char *n0 = argv[1];
	char *n1 = argv[2];

	num0 = 0;
	num1 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (n0[0] == 45)
		num0 = -1 * atoi(&n0[1]);
	else
		num0 = atoi(&n0[0]);

	if (n1[0] == 45)
		num1 = -1 * atoi(&n1[1]);
	else
		num1 = atoi(&n1[0]);

	printf("%d\n", num0 * num1);

	return (0);
}
