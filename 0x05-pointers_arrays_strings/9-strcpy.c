#include "main.h"

/**
 * _strcpy - bootleg strcpy from stdio
 *
 * @dest: where we yeet the output
 * @src: where we takka ze input
 *
 * Return: pointer to destinashun
 */

char *_strcpy(char *dest, char *src)
{
	int idx;

	idx = 0;

	while (idx >= 0)
	{
		*(dest + idx) = *(src + idx);

		if (*(src + idx) == '\0')
			return (dest);

		idx++;
	}

	return (dest);
}
