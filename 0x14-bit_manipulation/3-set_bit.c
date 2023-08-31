#include "main.h"

/**
 * set_bit - change value of bit at a given index
 *
 * @n: number modifying
 * @index: index to modify at
 *
 * Return: DEATH
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
