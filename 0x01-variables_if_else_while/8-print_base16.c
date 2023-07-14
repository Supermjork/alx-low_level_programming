#include<stdio.h>

/**
 * main - DIE
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		if (num < 10)
			putchar(48 + num);
		else
			putchar(87 + num);

	putchar('\n');

	return (0);
}
