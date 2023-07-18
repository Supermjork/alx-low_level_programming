#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - prints all natural numbers up until 98
 *
 * @start: first number to print from
 *
 * Return: Void
 */

void print_to_98(int start)
{
	if (start <= 98)
	{
		for (start = start; start < 98; start++)
		{
			printf("%d, ", start);
		}
	}
	else 
		for (start = start; start > 98; start--)
		{
			printf("%d, ", start);
		}

	printf("%d\n", 98);
}

