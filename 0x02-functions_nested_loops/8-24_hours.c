#include "main.h"

/**
 * jack_bauer - function to print ever hour numerically (24hr format)
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr < 10)
			{
				_putchar(48);
				_putchar(hr);
			}
			else
			{
				_putchar(hr);
			}

			_putchar(58);

			if (min < 10)
			{
				_putchar(48);
				_putchar(min);
			}
			else
			{
				_putchar(min);
			}

			_putchar(10);
		}
	}
}

