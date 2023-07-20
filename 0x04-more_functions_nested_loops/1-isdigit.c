#include "main.h"

/**
 * _isdigit - checks if the passed character is a number between 0 and 9
 *
 * @c: passed character
 *
 * Return: 0 non-numerical digit, 1 digit
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
