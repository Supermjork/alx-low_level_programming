#include<stdio.h>

/**
 * main - big stinker
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char rettel;

	for (rettel = 'z'; rettel >= 'a'; rettel--)
		putchar(rettel);

	putchar('\n');
	return (0);
}
