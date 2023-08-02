#include "main.h"

/**
 * _sqrt_recursion - returns sqrt of number
 *
 * @n: radicant
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_test(n, 0));
}

/**
 * sqrt_test - tests for roots, inefficient af
 *
 * @n: number to find its root
 * @t_case: numbers starting from 0 till root
 *
 * Return: root hopefully
 */

int sqrt_test(int n, int t_case)
{
	if (n == t_case * t_case)
	{
		return (t_case);
	}
	else if (n < t_case * t_case)
	{
		return (-1);
	}

	return (sqrt_test(n, t_case + 1));
}
