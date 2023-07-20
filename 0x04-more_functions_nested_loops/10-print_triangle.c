#include "main.h"

/**
 * print_triangle - prints a triangle with specified height
 *
 * @size: height
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		int height, whites;

		for (height = 0; height < size; height++)
		{
			for (whites = height; whites < size; whites++)
			{
				_putchar(20);
			}

			for (whites = 1; whites <= height; whites++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
