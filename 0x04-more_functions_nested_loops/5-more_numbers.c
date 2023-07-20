#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int dig0, dig1, count;

	for (count = 0; count < 10; count++)
	{
		for (dig1 = 0; dig1 < 2; dig1++)
		{
			for (dig0 = 0; dig0 < 15; dig0++)
			{
				if (dig1 == 1)
				{
					_putchar(48 + dig1)
				}

				_putchar(48 + (dig0 % 10));
			}
		}
		_putchar(10);
	}
}
