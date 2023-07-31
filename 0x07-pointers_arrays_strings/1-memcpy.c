#include "main.h"

/**
 * _memcpy - copies n bytes from a memory area to another
 *
 * @dest: where to copy
 * @src: copying from
 * @n: number of bytes from src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*(dest + n) = *(src + n);
		n--;
	}
	return (dest);
}
