#include "main.h"
#include<stdio.h>

/**
 * main - printing fibo
 *
 * Return: 0
 */

int main(void)
{
	unsigned long n0, n1, fib, sum;

	n0 = 0;
	n1 = 1;
	fib = 3;
	sum = 0;

	while (fib < 4000000)
	{
		fib = n0 + n1;

		n0 = n1;
		n1 = fib;

		if (fib % 2 == 0)
			sum += fib;
	}

	printf("%lu\n", sum);

	return (0);
}

