#include "main.h"

/**
 * factorial - returns factorial of give number
 *
 * @n: number
 *
 * Return: factorial of number or -1 if error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * fact(n - 1));
	}
}
