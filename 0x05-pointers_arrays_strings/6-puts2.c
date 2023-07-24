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
	int idx;

	for (idx = 0; *str != '\0'; str++)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar(10);
}
