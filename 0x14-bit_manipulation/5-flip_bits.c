#include "main.h"

/**
 * flip_bits - Switcherino
 *
 * @n: eeeeeeeeeeee
 * @m: EEEEEEEEEEEE
 *
 * Return: DEAD
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, count;

	mask = count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
