#include "main.h"

/**
 * _puts_recursion - finna put an entire string, recursively
 *
 * @str: input string
 *
 * Return: void
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*str);

	_puts_recursion(str++);
}
