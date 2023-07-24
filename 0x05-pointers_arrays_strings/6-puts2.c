#include "main.h"

/**
 * puts2 - prints every other character in string
 *
 * @str: passed string
 *
 * Return: void
 */

void puts2(char *str)
{
	int idx, hed;

	for (hed = 0; *str != '\0'; str++)
	{
		hed++;
	}

	for (idx = 0; idx < hed; idx += 2)
	{
		_putchar(*(str + idx));
	}
	_putchar(10);
}
