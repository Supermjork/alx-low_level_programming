#include "main.h"

/**
 * print_alphabet - prints all letters in the alphabet
 *
 * Return: void Always (On success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar(10);
}
