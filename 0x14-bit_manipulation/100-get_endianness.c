#include "main.h"

/**
 * get_endianness - get architecture of machine
 *
 * Return: 1 if lil endi, 0 if big E
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int) *c);
}
