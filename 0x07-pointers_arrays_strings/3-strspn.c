#include "main.h"

/**
 * _strspn - finds length of substring within a string
 *
 * @str: original string
 * @accept: substring
 *
 * Return: number of bytes that span substring within str
 */

unsigned int _strspn(char *str, char *accept)
{
	int str_idx, acc_idx, flag;

	for (str_idx = 0; *(str + str_idx) != '\0'; str_idx++)
	{
		flag = 0;

		for (acc_idx = 0; *(str + acc_idx) != '\0'; acc_idx++)
		{
			if (*(accept + acc_idx) == *(str + acc_idx))
				flag = 1
		}

		if (flag == 0)
			return (str_idx);
	}

	return (str_idx);
}
