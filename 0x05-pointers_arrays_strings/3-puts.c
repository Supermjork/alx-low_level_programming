#include "main.h"

/**
 * _puts - prints a passed string
 *
 * @str: char array pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	char c;

	for (c = 0; *str != '\0'; str++)
		_putchar(c);

	_putchar(10);
}

