#include "main.h"
#include<stdio.h>

/**
 * _atoi - bootleg atoi
 *
 * @str: passed string
 *
 * Return: int
 */

int _atoi(char *str)
{
	int value, sign, idx;

	/* sign to consider all '-' in the string */
	sign = 1;
	/* value to extract the number from the string */
	value = 0;

	/* iterating over each character to decide the last sign */
	for (idx = 0; str[idx] != '\0' && !(str[idx] > 47 && str[idx] < 58); idx++)
	{
		if (*(str + idx) == 45)
			sign *= -1;
	}

	for (idx = 0; *(str + idx) != 0; idx++)
	{
		if (*(str + idx) > 47 && *(str + idx) < 58)
			value = (value * 10) + (sign * (*(str + idx) - 48));
		if (value != 0 && !(*(str + idx) > 47 && *(str + idx) < 58))
			return (value);
	}
	return (value);
}
