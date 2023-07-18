#include "main.h"
#include<stdio.h>

/**
 * main - program that computes the sum of numbers below 1024
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}

