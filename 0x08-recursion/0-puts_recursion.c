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
	int idx;

	idx = 0;

	if (*(str + idx) == '\0')
		return;

	_putchar(*(str + idx));
	
	idx++;

	_puts_recursion(*(str + idx));
}
