#include<stdlib.h>
#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated with @separator
 *
 * @separator: char used to separate output numbers
 * @n: nums passed
 *
 * Return: naught
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	if (n <= 0)
		return (0);

	va_start(nums, n);

	while (i < n)
	{
		printf("%d", va_arg(nums, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		i++;
	}
	va_end(nums);

	printf("\n");
}

