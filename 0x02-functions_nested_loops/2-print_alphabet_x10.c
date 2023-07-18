#include "main.h"

/**
 * print_alphabet_x10 - calls print_alphabet 10 times
 *
 * print_alphabet - prints alphabet all in lower case
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar(10);
}

