#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed to function
 *
 * @separator: what separates strings
 * @n: passed strings
 *
 * Return: naught
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i = 0;
	char *str;

	if (n > 0)
	{
		va_start(strs, n);

		while (i < n)
		{
			str = va_arg(strs, char *);

			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(strs);
	}
	printf("\n");
}
