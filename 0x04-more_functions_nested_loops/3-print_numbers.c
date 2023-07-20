#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9
 *
 * Returns: void
 */

void print_numbers()
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(48 + n);
	}

	_putchar(10);
}
