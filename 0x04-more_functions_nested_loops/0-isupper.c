#include "main.h"

/**
 * _isupper - detects if the passed character is uppercase
 *
 * @c: passed character
 *
 * Return: 0 Lowercase, 1 Uppercase
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
