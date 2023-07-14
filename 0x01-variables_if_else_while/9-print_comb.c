#include<stdio.h>

/**
 * main - LAST ONE PLS
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);

		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
