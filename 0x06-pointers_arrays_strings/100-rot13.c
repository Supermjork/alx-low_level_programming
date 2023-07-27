#include "main.h"

/**
 * rot13 - encrypt with offsetting 13 letters
 *
 * @src: original string
 *
 * Return: string
 */

char *rot13(char *src)
{
	char c[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"};

	int ptr;

	for (ptr = 0; src[ptr] != '\0'; ptr++)
	{
		if (src[ptr] >= 'A' && src[ptr] <= 'z')
			src[ptr] = c[src[ptr] - 'A'];
	}
	return (src);
}
