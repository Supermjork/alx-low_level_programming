#include "main."

/**
 * print_diagonal - prints n number of \
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int length, whites;

		for (length = 0; length < n; length++)
		{
			for (whites = 0; whites < length; whites++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
