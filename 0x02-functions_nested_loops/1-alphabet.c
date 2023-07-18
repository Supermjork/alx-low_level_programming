#include<stdio.h>

/**
 * main - calls function "print_alphabet()"
 * print_alphabet - prints the alphabet in small case
 * followed by a new line
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
}

