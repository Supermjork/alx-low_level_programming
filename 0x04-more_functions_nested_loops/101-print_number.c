#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: int to print
 */

void print_number(int n)
{
	unsigned int n0;

	if (n < 0)
	{
		n0 = -n;
		_putchar(45);
	}
	else
	{
		n0 = n;
	}

	if (n0 / 10)
	{
		print_number(n0 / 10);
	}

	_putchar((n0 % 10) + 48);
}
