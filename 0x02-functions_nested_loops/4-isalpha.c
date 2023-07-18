#include "main.h"

/**
 * _isalpha - checks if the character is from the alphabet regardless of case.
 *
 * @c: param of character.
 *
 * Return: 1 is alphabetical, 0 isn't
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
