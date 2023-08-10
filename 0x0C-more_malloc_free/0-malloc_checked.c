#include "main.h"
#include<stdlib.c>

/**
 * malloc_checked - checks if we can allocate a memory space
 *
 * @b: byte size
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	if (b <= 0)
		return;

	a = (void *)malloc(b);

	if (a == null)
		return (98);

	return (a);
}
