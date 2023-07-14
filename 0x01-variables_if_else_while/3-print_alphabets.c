#include<stdio.h>

/**
 * main - MORE ALPHABET
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);

	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');

	return (0);

}
