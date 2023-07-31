#include "main.h"

/**
 * _strpbrk - locates first occurence of string
 *
 * @s: substring searched for
 * @accept: string searching in
 *
 * Return: byte in s that matches in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int str_idx, acc_idx;

	for (str_idx = 0; *(s + str_idx) != '\0'; str_idx++)
	{
		for (acc_idx = 0; *(accept + acc_idx); acc_idx++)
		{
			if (*(accept + acc_idx) == *(s + str_idx))
				return (&s[str_idx]);
		}
	}
	return (NULL);
}
