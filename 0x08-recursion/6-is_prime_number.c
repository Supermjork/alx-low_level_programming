#include "main.h"

/**
 * is_prime_number - shows if number is prime or not
 * @num: to check
 *
 * Return: 1 prime, 0 not
 */

int is_prime_number(int num)
{
	if (num < 2)
		return (0);

	return (prime_test(num, 2));
}

/**
 * prime_test - test if number is prime or not
 *
 * @n: tester
 * @t_case: test number
 *
 * Return: death
 */

int prime_test(int n, int t_case)
{
	if (n % t_case == 0)
	{
		return (0);
	}
	else if (n >= (t_case + 1) * t_case)
	{
		return (prime_test(n, t_case + 1));
	}

	return (1);
}
