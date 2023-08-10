#include "main.h"
#include<stdlib.h>

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
		exit(0);

	a = (void *)malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
