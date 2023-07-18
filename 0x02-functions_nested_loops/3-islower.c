#include "main.h"

/**
 * _islower - checks if passed char is lowercase or not.
 *
 * @c: passed char.
 *
 * Return: 1 if lower case, 0 is upper.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

