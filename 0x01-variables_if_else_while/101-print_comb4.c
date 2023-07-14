#include<stdio.h>

/**
 * main - depression
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int unit;
	int tens;
	int hund;

	for (hund = 0; hund < 8; hund++)
	{
		for (tens = hund + 1; tens < 9; tens++)
		{
			for (unit = tens + 1; unit < 10; unit++)
			{
				putchar(48 + hund);
				putchar(48 + tens);
				putchar(48 + unit);

				if (hund != 7)
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
