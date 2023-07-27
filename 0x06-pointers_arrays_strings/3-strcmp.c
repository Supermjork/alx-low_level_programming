#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Bool
 */

int _strcmp(char *s1, char *s2)
{
	int ptr;

	ptr = 0;

	while (s1[ptr] != '\0' && s2[ptr] != '\0')
	{
		if (s1[ptr] != s2[ptr])
			return (s1[ptr] - s2[ptr]);
		ptr++;
	}

	if (s1[ptr] == s2[ptr])
		return (0);
	return (s1[ptr] = s2[ptr]);
}
