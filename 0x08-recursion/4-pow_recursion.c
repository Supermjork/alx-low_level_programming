#include "main.h"

/**
 * _pow_recursion - raises a base to a power
 *
 * @base: base number
 * @pwr: power base is raised to
 *
 * Return: exponentiated base
 */

int _pow_recursion(int base, int pwr)
{
	if (pwr == 0)
	{
		return (1);
	}
	else
	{
		return (base * _pow_recursion(base, pwr - 1));
	}
}
