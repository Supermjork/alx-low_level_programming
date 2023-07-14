#include<stdio.h>

/**
 * main - eeeeeeeeeeeeeeeeee
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int cmpnd1;
	int cmpnd0;

	for (cmpnd1 = 0; cmpnd1 <=99; cmpnd1++)
	{
		for (cmpnd0 = 0; cmpnd0 <= 99; cmpnd0++)
		{
			if (cmpnd1 < cmpnd0)
			{
				putchar((cmpnd1 / 10) + '0');
				putchar((cmpnd1 % 10) + '0');

				putchar(32);

				putchar((cmpnd0 / 10) + '0');
				putchar((cmpnd0 % 10) + '0');

				if (cmpnd0 != 98 || cmpnd1 != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
