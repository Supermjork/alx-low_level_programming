#include "main.h"

/**
 * print_times_table - takes input and prints (n + 1) x (n + 1) table
 *
 * @n: the nth table to be printed
 *
 * Return: void Always
 */

void print_times_table(int n)
{
	int table, num, prod;

	if (n >= 0 && n <= 15)
	{
		for (table = 0; table <= n; table++)
		{
			for (num = 0; num <= n; num++)
			{
				prod = num * table;
				
				if (num != 0)
				{
					_putchar(44);
					_putchar(32);
				}

				if ((prod < 10) && (num != 0))
				{
					_putchar(32);
					_putchar((prod % 10) + 48);
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else if ((prod >=100) && (num !=0))
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar((prod % 10) + 48);
				}
			}
			_putchar(10);
		}
	}
}
