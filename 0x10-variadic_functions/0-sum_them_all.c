#include "main.h"
#include<stdarg.h>

/**
 * sum_them_all - sums all passed arguments
 *
 * @n: amount of arguments
 * 
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);

	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}

	va_end(args);
	return (sum);
}
