#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @str: string to reverse
 *
 * Return: void
 */

void rev_string(char *str)
{
	int s_len;

	for (s_len = 0; *str != '\0'; str++)
		s_len++;

	char rev[s_len];
	int r_len;

	for (r_len = 0; s_len > 0; s_len--)
	{
		rev[r_len] = *(str + s_len - 1);
		r_len++;
	}

	while (s_len < r_len)
	{
		*(str + s_len) = rev[r_len];
		s_len++;
	}
}
