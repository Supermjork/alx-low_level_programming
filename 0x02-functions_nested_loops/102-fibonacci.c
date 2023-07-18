#include "main.h"
#include<stdio.h>

/**
 * main - program to compute the first 50 fibonnaci numbers
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int n0 = 1;
	int n1 = 2;
	int lim = 50;
	int fib, i;

	printf("%d, %d, ", 1, 2);

	for (i = 2; i <= lim; i++)
	{
		fib = n0 + n1;

		if (i == lim - 1)
		{
			printf("%d\n", fib);
		}
		else
		{
			printf("%d, ", fib);
		}

		n0 = n1;
		n1 = fib;
	}

	return (0);
}

