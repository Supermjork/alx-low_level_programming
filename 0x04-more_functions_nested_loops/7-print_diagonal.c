#include "main.h"

/**
 * print_diagonal - prints da diagonal brrrrrrrr
 *
 * @n: height of diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		int height, whites;

		for (height = 0; height < n; height++)
		{
			for (whites = 0; whites < height; whites++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
