#include "main.h"

/**
 * print_alphabhet - prints all letters in the alphabet
 *
 * Return: 0 Always (On success)
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
