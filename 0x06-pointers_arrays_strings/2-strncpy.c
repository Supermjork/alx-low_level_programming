#include "main.h"

/**
 * _strncpy - copies n bytes from and to another string
 *
 * @dest: copied into
 * @src: copied from
 * @n: nummber of bytes to copy
 *
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ptr;

	for (ptr = 0; ptr < n && *(src + ptr) != '\0'; ptr++)
	{
		*(dest + ptr) = *(src + ptr);
	}

	while (ptr < n)
	{
		*(dest + ptr) = '\0';
		ptr++;
	}

	return (dest);
}
