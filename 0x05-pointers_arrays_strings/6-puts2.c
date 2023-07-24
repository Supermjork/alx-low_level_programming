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

	hed = 0;
	idx = 0;

	while (*(str + hed) != '\0')
	{
		hed++;
	}

	for (; idx < hed; idx += 2)
	{
		_putchar(*(str + idx));
	}

	_putchar(10);
}
