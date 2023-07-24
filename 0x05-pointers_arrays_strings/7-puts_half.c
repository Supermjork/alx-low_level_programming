#include "main.h"

/**
 * puts_half - prints second half of string
 *
 * @str: passed string n stuff
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	n = len / 2;

	if (len % 2 != 0)
		n++;

	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}

	_putchar(10);
}
