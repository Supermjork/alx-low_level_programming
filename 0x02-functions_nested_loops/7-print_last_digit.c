#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 *
 * @n: passed number
 *
 * Return: n last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;

	_putchar(n + 48);

	return (n);
}

