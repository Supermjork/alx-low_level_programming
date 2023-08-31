#include "main.h"

/**
 * clear_bit - nuke bit back to 0
 *
 * @n: number modifiable
 * @index: index
 *
 * Return: DEAD BIT
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
