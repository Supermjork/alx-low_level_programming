#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int dig0, dig1;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (dig0 = 0; dig0 < 15; dig0++)
		{
			if (digd0 >= 10)
			{
				_putchar(48 + (dig0 / 10))
			}

			_putchar(48 + (dig0 % 10));
		}
	}
	_putchar(10);
}
