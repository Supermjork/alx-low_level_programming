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
	char rev[1000];
	int r_len, s_len;

	for (s_len = 0; *str != '\0'; str++)
		s_len++;

	for (r_len = 0; s_len > 0; s_len--)
	{
		rev[r_len] = *(str + s_len - 1);
		r_len++;
	}

	while (s_len < r_len)
	{
		*(str + s_len) = rev[s_len];
		s_len++;
	}
}
