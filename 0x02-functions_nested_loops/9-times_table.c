#include "main.h"

/**
 * times_table - boutta print the times table so hard rn fr
 *
 * Return: void
 */

void times_table(void)
{
	int table, num, prod;

	for (table = 0; table < 10; table++)
	{
		for (num = 0; num < 10; num++)
		{
			prod = table * num;

			/* Formatting the output */
			if (num != 0)
			{
				_putchar(44);
				_putchar(20);
			}

			if (prod >= 10)
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else if ((prod < 10) && (num != 0))
			{
				_putchar(20);
				_putchar((prod % 10) + 48);
			}
			else
				_putchar((prod % 10) + 48);
		}
		_putchar(10);
	}
}

