#include "main.h"

/**
 * print_line - prints lines with size n
 *
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
