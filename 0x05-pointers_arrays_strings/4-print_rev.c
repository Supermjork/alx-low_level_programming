#include "main.h"

/**
 * print_rev - prints a reversed string
 *
 * @str: string ptr
 *
 * Return: void
 */

void print_rev(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	for (len = len - 1; len >= 0; len--)
		_putchar(*(str + len));

	_putchar(10);
}
