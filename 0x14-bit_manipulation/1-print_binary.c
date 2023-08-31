#include "main.h"

/**
 * print_binary - prints binary of decimal
 *
 *
 * @n: binary num
 *
 * Return: DEATH
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
 * _divide - recursively divide the number by half
 *
 * @n: number to divide
 *
 * Return: nothing but prints on the way lmao
 */

void _divide(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');

}
