#include "main.h"

/**
 * print_square - prints square lol
 *
 * @n: dimensions of square
 *
 * Return: void
 */

void print_square(int n)
{
	if (n > 0)
	{
		int l, w;

		for (l = 0; l < n; l++)
		{
			for (w = 0; w < n; w++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
