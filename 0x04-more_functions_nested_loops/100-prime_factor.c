#include<stdio.h>
#include<math.h>

/**
 * main - boutta get the primes of a number
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	long int n, max, i;

	n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
