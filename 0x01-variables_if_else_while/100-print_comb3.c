#include<stdio.h>

/*
 * main - combinatorics pain
 *
 * Return: 0 ALways (Success)
 */

int main(void)
{
	int ten;
	int unt;

	for (ten = 0; ten < 9; ten++)
	{
		for (unt = ten + 1; unt < 10; unt++)
		{
			putchar(48 + ten);
			putchar(48 + unt);

			if (ten != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}
