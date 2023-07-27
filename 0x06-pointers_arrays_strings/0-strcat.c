#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first half of output str
 * @src: string to be appended
 *
 * Return: char (Appended string)
 */

char *_strcat(char *dest, char *src)
{
	int len_d, len_s;

	len_d = 0;

	while (*(dest + len_d) != '\0')
	{
		lend_d++;
	}

	for (len_s = 0; *(src + len_s) != '\0'; len_s++)
	{
		*(dest + len_d) = *(src + len_s);
		len_d++
	}

	*(dest + len_d) = *(src + len_s);

	return (dest);
}
