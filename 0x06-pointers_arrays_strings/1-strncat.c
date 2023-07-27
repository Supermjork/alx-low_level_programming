#include "main.h"

/**
 * _strncat - copies n bytes into other str
 *
 * @dest: str concatenated on
 * @src: str to concat from
 * @n: n-bytes from str
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d, len_s;

	len_d = 0;

	while (*(dest + len_d) != '\0')
	{
		len_d++;
	}

	for (len_s = 0; len_s < n; len_s++)
	{
		*(dest + len_d) = *(src + len_s);
		len_d++;
	}

	if (*(dest + (len_d - 1)) != '\0')
	{
		*(dest + len_d) = '\0';
	}

	return (dest);
}
