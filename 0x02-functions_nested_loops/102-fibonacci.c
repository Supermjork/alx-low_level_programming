#include "main.h"
#include<stdio.h>

/**
 * main - program to compute the first 50 fibonnaci numbers
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	unsigned long n0 = 1;
	unsigned long n1 = 2;
	unsigned long fib;
	int i;
	int lim = 50;

	printf("%lu, %lu, ", n0, n1);

	for (i = 2; i < lim; i++)
	{
		fib = n0 + n1;

		if (i == lim - 1)
		{
			printf("%lu\n", fib);
		}
		else
		{
			printf("%lu, ", fib);
		}

		n0 = n1;
		n1 = fib;
	}

	return (0);
}

